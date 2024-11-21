//
// Created by victo on 06/11/2024.
//

#ifndef TORRE_H
#define TORRE_H

void Toarriba(struct pieza p[8][8], int x, int y);
void Toabajo(struct pieza p[8][8], int x, int y);
void Toderecha(struct pieza p[8][8], int x, int y);
void Toizquierda(struct pieza p[8][8], int x, int y);

void TcheckMov(struct pieza tablero[8][8], int x, int y);
void menuT(struct pieza tablero[8][8], int x, int y);


#endif //TORRE_H
