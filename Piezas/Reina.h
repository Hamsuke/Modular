//
// Created by victo on 06/11/2024.
//

#ifndef REINA_H
#define REINA_H

void arriba(struct pieza p[8][8], int x, int y);
void abajo(struct pieza p[8][8], int x, int y);
void derecha(struct pieza p[8][8], int x, int y);
void izquierda(struct pieza p[8][8], int x, int y);
void diagAbD(struct pieza p[8][8], int x, int y);
void diagAbI(struct pieza p[8][8], int x, int y);
void diagAD(struct pieza p[8][8], int x, int y);
void diagAI(struct pieza p[8][8], int x, int y);
void checkMov(struct pieza tablero[8][8], int x, int y);
void menuR(struct pieza tablero[8][8], int x, int y);

#endif //REINA_H
