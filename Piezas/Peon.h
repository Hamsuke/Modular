//
// Created by victo on 06/11/2024.
//

#ifndef PEON_H
#define PEON_H

void arriba(struct pieza p[8][8], int x, int y);
void diagAD(struct pieza p[8][8], int x, int y);
void diagAI(struct pieza p[8][8], int x, int y);
void checkMov(struct pieza tablero[8][8], int x, int y);
void menuR(struct pieza tablero[8][8], int x, int y);


#endif //PEON_H
