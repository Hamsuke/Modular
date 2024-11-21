//
// Created by victo on 06/11/2024.
//


#ifndef PEON_H
#define PEON_H

void arribaP(struct pieza p[8][8], int x, int y);
void abajoP(struct pieza p[8][8], int x, int y);
void diagAbDP(struct pieza p[8][8], int x, int y);
void diagAbIP(struct pieza p[8][8], int x, int y);
void diagADP(struct pieza p[8][8], int x, int y);
void diagAIP(struct pieza p[8][8], int x, int y);

void checkMovP(struct pieza tablero[8][8], int x, int y, char C);
void menuP(struct pieza tablero[8][8], int x, int y, char C);
void peonN(struct pieza tab[8][8], int x, int y);
void peonB(struct pieza tab[8][8], int x, int y);

#endif //PEON_H