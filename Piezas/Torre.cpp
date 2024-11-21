//
// Created by victo on 05/11/2024.
//

#include "Pieza.h"
#include "Torre.h"

void TcheckMov(struct pieza copy[8][8], int x, int y) {
    Toarriba(copy, x, y);
    Toabajo(copy, x, y);
    Toderecha(copy, x, y);
    Toizquierda(copy, x, y);
    setlocale(LC_CTYPE, "");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(strcmp(copy[i][j].simbolo, "") == 0) {
            }else {
                printf("%s",copy[i][j].simbolo);
            }
        }
        printf("\n");
    }
}

void Toarriba(struct pieza p[8][8], int x, int y){
    while (x - 1 > 0 && strcmp(p[x-1][y].simbolo, "") == 0){
        p[x-1][y].simbolo = Ar;
        x--;
    }
}

void Toabajo(struct pieza p[8][8], int x, int y){
    while (x + 1 < 8 && strcmp(p[x + 1][y].simbolo, "") == 0){
        p[x + 1][y].simbolo = Ab;
        x++;
    }
}

void Toizquierda(struct pieza p[8][8], int x, int y){
    while (y - 1 > 0 && strcmp(p[x][y - 1].simbolo, "") == 0){
        p[x][y - 1].simbolo = Izq;
        y--;
    }
}

void Toderecha(struct pieza p[8][8], int x, int y){
    while (y + 1 < 8 && strcmp(p[x][y + 1].simbolo, "") == 0){
        p[x][y + 1].simbolo = Der;
        y++;
    }
}

void menuT(struct pieza tablero[8][8], int x, int y){
    char col;
    TcheckMov(tablero, x, y);
    printf("A que posicion desea moverse? ");
    printf("Ingresa la fila destino");
    scanf("%d",&x);
    printf("Ingresa la columna destino");
    scanf("%c",&col);
    scanf("%c",&col);
}