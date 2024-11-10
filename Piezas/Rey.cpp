//
// Created by victo on 05/11/2024.
//

#include "Pieza.h"
#include "Rey.h"

void derecha(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x][y+1].simbolo," ") == 0) {
        p[x][y+1].simbolo = Der;
    }
}

void izquierda(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x][y-1].simbolo, " ") == 0 ) {
        p[x][y-1].simbolo = Izq;
    }
}

void arriba(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x-1][y].simbolo, " ") == 0 ) {
        p[x-1][y].simbolo = Ar;
    }
}

void abajo(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x+1][y].simbolo, " ") == 0 ) {
        p[x+1][y].simbolo = Ab;
    }
}

void diagAD(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x-1][y+1].simbolo, " ") == 0 ) {
        p[x-1][y+1].simbolo = DiAD;
    }
}

void diagAbD(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x+1][y+1].simbolo, " ") == 0 ) {
        p[x+1][y+1].simbolo = DiAbD;
    }
}

void diagAI(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x-1][y-1].simbolo, " ") == 0 ) {
        p[x-1][y-1].simbolo = DiAI;
    }
}

void diagAbI(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x+1][y-1].simbolo, " ") == 0 ) {
        p[x+1][y-1].simbolo = DiAbI;
    }
}

void checkMov(struct pieza copy[8][8], int x, int y) {
    arriba(copy, x, y);
    abajo(copy, x, y);
    derecha(copy, x, y);
    izquierda(copy, x, y);
    diagAI(copy, x, y);
    diagAD(copy, x, y);
    diagAbI(copy, x, y);
    diagAbD(copy, x, y);
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

void menuR(struct pieza tablero[8][8], int x, int y) {
    checkMov(tablero, x, y);
    printf("A que posicion desea moverse? ");
    printf("Ingresa la fila destino");
    scanf("%d",&X);
    printf("Ingresa la columna destino");
    scanf("%c",&col);
    scanf("%c",&col);
}