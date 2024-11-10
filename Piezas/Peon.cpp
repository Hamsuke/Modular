//
// Created by victo on 05/11/2024.
//

#include "Pieza.h"
#include "Peon.h"

void arribaP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x][y+1].simbolo,"  ") == 0) {
        p[x][y+1].simbolo = Ar;
    }
}

void abajoP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x][y-1].simbolo, "  ") == 0 ) {
        p[x][y-1].simbolo = Ab;
    }
}

void izquierdaP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x-1][y].simbolo, "") == 0 ) {
        p[x-1][y].simbolo = Izq;
    }
}

void derechaP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x+1][y].simbolo, "") == 0 ) {
        p[x+1][y].simbolo = Der;
    }
}

void diagAIP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x-1][y+1].simbolo, "") == 0 ) {
        p[x-1][y+1].simbolo = DiAI;
    }
}

void diagADP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x+1][y+1].simbolo, "") == 0 ) {
        p[x+1][y+1].simbolo = DiAD;
    }
}

void diagAbIP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x-1][y-1].simbolo, "") == 0 ) {
        p[x-1][y-1].simbolo = DiAbI;
    }
}

void diagAbDP(struct pieza p[8][8], int x, int y){
    if( strcmp(p[x+1][y-1].simbolo, "") == 0 ) {
        p[x+1][y-1].simbolo = DiAbD;
    }
}

void peonN(struct pieza tab[8][8], int x, int y){
    abajo(tab,x,y);
    diagAbD(tab,x,y);
    diagAbI(tab,x,y);
}

void peonB(struct pieza tab[8][8], int x, int y){
    arriba(tab,x,y);
    diagAD(tab,x,y);
    diagAI(tab,x,y);
}

void checkMovP(struct pieza tablero[8][8], int x, int y, char C){
    if (C == 'n'){
        peonN(tablero,x,y);
    } else{
        peonB(tablero,x,y);
    }
}