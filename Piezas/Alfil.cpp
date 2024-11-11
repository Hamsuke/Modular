//
// Created by victo on 05/11/2024.
//

#include "Alfil.h"
#include "Pieza.h"

void AldiaAbD(struct pieza p[8][8], int x, int y) {
    while (strcmp(p[x + 1][y + 1].simbolo, " ") == 0 && p[x][y].color != p[x + 1][y + 1].color) {
        p[x + 1][y + 1].simbolo = DiAbD;
        x++;
        y++;
    }
}
void AldiaAbI(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x + 1][y - 1].simbolo, " ") == 0 && p[x][y].color != p[x + 1][y - 1].color) {
        p[x + 1][y - 1].simbolo = DiAbI;
        x++;
        y--;
    }
}
void AldiaAD(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x-1][y+1].simbolo, " ") == 0 && p[x][y].color != p[x-1][y+1].color) {
        p[x-1][y+1].simbolo = DiAbD;
        x--;
        y++;
    }
}

void AldiaAI(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x - 1][y - 1].simbolo, " ") == 0 && p[x][y].color != p[x - 1][y - 1].color) {
        p[x - 1][y+1].simbolo = DiAI;
        x--;
        y--;
    }
}

void checkMovAl(struct pieza copy[8][8], int x, int y){
    AldiaAbD(copy, x, y);
    AldiaAbI(copy, x, y);
    AldiaAD(copy, x, y);
    AldiaAI(copy, x, y);
    setlocale(LC_CTYPE, "");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(strcmp(copy[i][j].simbolo, " ") == 0) {
            }else {
                printf("%s ",copy[i][j].simbolo);
            }
        }
        printf("\n");
    }
}

void menuAl(struct pieza tablero[8][8], int x, int y) {
    char col;
    checkMovAl(tablero, x, y);
    printf("A que posicion desea moverse? ");
    printf("Ingresa la fila destino");
    scanf("%d",&x);
    printf("Ingresa la columna destino");
    scanf("%c",&col);
    scanf("%c",&col);
}
