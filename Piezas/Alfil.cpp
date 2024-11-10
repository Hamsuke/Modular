//
// Created by victo on 05/11/2024.
//

#include "Alfil.h"
#include "Pieza.h"

void diaAbD(struct pieza p[8][8], int x, int y) {
    while (strcmp(p[x + 1][y - 1].simbolo, "") == 0 && p[x][y].color != p[x + 1][y - 1].color) {
        p[x + 1][y - 1].simbolo = DiAbD;
        x++;
        y--;
    }
}
void diaAbI(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x - 1][y - 1].simbolo, "") == 0 && p[x][y].color != p[x - 1][y - 1].color) {
        p[x - 1][y - 1].simbolo = DiAbI;
        x--;
        y--;
    }
}
void diaAD(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x+1][y+1].simbolo, "") == 0 && p[x][y].color != p[x+1][y+1].color) {
        p[x+1][y+1].simbolo = DiAbD;
        x++;
        y++;
    }
}

void diaAI(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x - 1][y + 1].simbolo, "") == 0 && p[x][y].color != p[x - 1][y + 1].color) {
        p[x - 1][y+1].simbolo = DiAI;
        x--;
        y++;
    }
}
void checkMovAl(struct pieza tablero[8][8], int x, int y){

}
void menuAl(struct pieza tablero[8][8], int x, int y);
