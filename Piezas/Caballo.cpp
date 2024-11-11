//
// Created by victo on 05/11/2024.
//

#include "Pieza.h"
#include "Caballo.h"

void ArribaI(struct pieza p[8][8], int x, int y) {
    if (x + 1 < 8 && y + 2 < 8 && p[x+1][y+2].color != p[x][y].color) {
        p[x+1][y+2].simbolo = "X";
    }
}

void ArribaD(struct pieza p[8][8], int x, int y) {
    if (x - 1 >= 0 && y + 2 < 8 && p[x-1][y+2].color != p[x][y].color) {
        p[x-1][y+2].simbolo = "X";
    }
}

void DerechaI(struct pieza p[8][8], int x, int y) {
    if (x + 2 < 8 && y + 1 < 8 && p[x+2][y+1].color != p[x][y].color) {
        p[x+2][y+1].simbolo = "X";
    }
}

void DerechaD(struct pieza p[8][8], int x, int y) {
    if (x + 2 < 8 && y - 1 >= 0 && p[x+2][y-1].color != p[x][y].color) {
        p[x+2][y-1].simbolo = "X";
    }
}

void IzquierdaI(struct pieza p[8][8], int x, int y) {
    if (x - 2 >= 0 && y - 1 >= 0 && p[x-2][y-1].color != p[x][y].color) {
        p[x-2][y-1].simbolo = "X";
    }
}

void IzquierdaD(struct pieza p[8][8], int x, int y) {
    if (x - 2 >= 0 && y + 1 < 8 && p[x-2][y+1].color != p[x][y].color) {
        p[x-2][y+1].simbolo = "X";
    }
}

void AbajoI(struct pieza p[8][8], int x, int y) {
    if (x - 1 >= 0 && y - 2 >= 0 && p[x-1][y-2].color != p[x][y].color) {
        p[x-1][y-2].simbolo = "X";
    }
}

void AbajoD(struct pieza p[8][8], int x, int y) {
    if (x + 1 < 8 && y - 2 >= 0 && p[x+1][y-2].color != p[x][y].color) {
        p[x+1][y-2].simbolo = "X";
    }
}

void checkMovCab(struct pieza copy[8][8], int x, int y) {
    ArribaI(copy, x, y);
    AbajoI(copy, x, y);
    AbajoD(copy, x, y);
    ArribaD(copy, x, y);
    IzquierdaD(copy, x, y);
    IzquierdaI(copy, x, y);
    DerechaD(copy, x, y);
    DerechaI(copy, x, y);
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

void menuCa(struct pieza tablero[8][8], int x, int y) {
    char col;
    checkMovCab(tablero, x, y);
    printf("A que posicion desea moverse? ");
    printf("Ingresa la fila destino");
    scanf("%d",&x);
    printf("Ingresa la columna destino");
    scanf("%c",&col);
    scanf("%c",&col);
}