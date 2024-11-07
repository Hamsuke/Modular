//
// Created by victo on 05/11/2024.
//

#include "Alfil.h"
#include "Pieza.h"

void diagAbD(struct pieza p[8][8], int x, int y) {
    int i = 1;
    while (strcmp(p[x+1][y+1].simbolo, "") == 0 && p[x][y].color != p[x+i][y+i].color) {
        p[x+1][y+1].simbolo = DiAbD;
    }
}
void diagAbI(struct pieza p[8][8], int x, int y);
void diagAD(struct pieza p[8][8], int x, int y);
void diagAI(struct pieza p[8][8], int x, int y);
void checkMov(struct pieza tablero[8][8], int x, int y);
void menuAl(struct pieza tablero[8][8], int x, int y);
