//
// Created by victo on 06/11/2024.
//

#ifndef CABALLO_H
#define CABALLO_H

void ArribaI(struct pieza p[8][8], int x, int y);
void ArribaD(struct pieza p[8][8], int x, int y);
void DerechaI(struct pieza p[8][8], int x, int y);
void DerechaD(struct pieza p[8][8], int x, int y);
void IzquierdaI(struct pieza p[8][8], int x, int y);
void IzquierdaD(struct pieza p[8][8], int x, int y);
void AbajoI(struct pieza p[8][8], int x, int y);
void AbajoD(struct pieza p[8][8], int x, int y);

void checkMovCab(struct pieza copy[8][8], int x, int y);

void menuCa(struct pieza tablero[8][8], int x, int y);

#endif //CABALLO_H
