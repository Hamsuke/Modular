//
// Created by victo on 05/11/2024.
//

#include <locale.h>

#include "Pieza.h"

void arriba(struct pieza *p[8][8], int x, int y){
    if( p[y+1][x]->simbolo == ""  ) {
        p[y+1][x]->simbolo = Ar;
    }
}

void abajo(struct pieza *p[8][8], int x, int y){
    if( p[y-1][x]->simbolo == ""  ) {
        p[y-1][x]->simbolo = Ab;
    }
}

void izquierda(struct pieza *p[8][8], int x, int y){
    if( p[y][x-1]->simbolo == ""  ) {
        p[y][x-1]->simbolo = Izq;
    }
}

void derecha(struct pieza *p[8][8], int x, int y){
    if( p[y][x+1]->simbolo == ""  ) {
        p[y][x+1]->simbolo = Der;
    }
}

void diagAI(struct pieza *p[8][8], int x, int y){
    if( p[y+1][x-1]->simbolo == ""  ) {
        p[y+1][x-1]->simbolo = DiAI;
    }
}

void diagAD(struct pieza *p[8][8], int x, int y){
    if( p[y+1][x+1]->simbolo == ""  ) {
        p[y+1][x+1]->simbolo = DiAD;
    }
}

void diagAbI(struct pieza *p[8][8], int x, int y){
    if( p[y-1][x-1]->simbolo == ""  ) {
        p[y-1][x-1]->simbolo = DiAbI;
    }
}

void diagAbD(struct pieza *p[8][8], int x, int y){
    if( p[y-1][x+1]->simbolo == ""  ) {
        p[y-1][x+1]->simbolo = DiAbD;
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
            if(strcmp(copy[i][j].simbolo, "") == 0) {
            }else {
                printf("%s  ",copy[i][j].simbolo);
            }
        }
        printf("\n");
    }
}

void MenuR(struct piezas *tablero[8][8], int x, int y) {
    checkMov(tablero, x, y);
}