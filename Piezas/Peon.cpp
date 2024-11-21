//
// Created by victo on 05/11/2024.
//

#include "Pieza.h"
#include "Peon.h"

void arribaP(struct pieza p[8][8], int x, int y){
    if(strcmp(p[x-1][y].simbolo, "") == 0 && strcmp(p[x-2][y].simbolo, "") == 0 && x == 6){
        p[x-1][y].simbolo = Ar;
        p[x-2][y].simbolo = Ar;
    } else if( strcmp(p[x-1][y].simbolo, "") == 0 ) {
        p[x-1][y].simbolo = Ar;
    }
}

void abajoP(struct pieza p[8][8], int x, int y){
    if(strcmp(p[x+1][y].simbolo, "") == 0 && strcmp(p[x+2][y].simbolo, "") == 0 && x == 1){
        p[x+1][y].simbolo = Ar;
        p[x+2][y].simbolo = Ar;
    } else if( strcmp(p[x+1][y].simbolo, "") == 0 ) {
        p[x+1][y].simbolo = Ab;
    }
}

void diagAbDP(struct pieza p[8][8], int x, int y){
    if( p[x+1][y+1].color != p[x][y].color) {
        p[x+1][y+1].simbolo = DiAbD;
    }
}

void diagAbIP(struct pieza p[8][8], int x, int y){
    if( p[x+1][y+1].color != p[x][y].color ) {
        p[x+1][y-1].simbolo = DiAbI;
    }
}

void diagADP(struct pieza p[8][8], int x, int y){
    if( p[x+1][y+1].color != p[x][y].color ) {
        p[x-1][y+1].simbolo = DiAD;
    }
}

void diagAIP(struct pieza p[8][8], int x, int y){
    if( p[x+1][y+1].color != p[x][y].color ) {
        p[x-1][y-1].simbolo = DiAI;
    }
}

void peonN(struct pieza tab[8][8], int x, int y){
    abajoP(tab,x,y);
    diagAbDP(tab,x,y);
    diagAbIP(tab,x,y);
}

void peonB(struct pieza tab[8][8], int x, int y){
    arribaP(tab,x,y);
    diagADP(tab,x,y);
    diagAIP(tab,x,y);
}

void checkMovP(struct pieza tablero[8][8], int x, int y, char C){
    if (C == 'n'){
        peonN(tablero,x,y);
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if(strcmp(tablero[i][j].simbolo, "") == 0) {
                    printf("  ");
                }else {
                    printf("%s",tablero[i][j].simbolo);
                }
            }
            printf("\n");
        }
    } else{
        peonB(tablero,x,y);
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if(strcmp(tablero[i][j].simbolo, "") == 0) {
                    printf("   ");
                }else {
                    printf("%s  ",tablero[i][j].simbolo);
                }
            }
            printf("\n");
        }
    }
}

void menuP(struct pieza tablero[8][8], int x, int y, char C) {
    char col;
    checkMovP(tablero, x, y, C);
    checkMovP(tablero, x, y, C);
    printf("A que posicion desea moverse? ");
    printf("Ingresa la fila destino");
    scanf("%d",&x);
    printf("Ingresa la columna destino");
    scanf("%c",&col);
    scanf("%c",&col);
}