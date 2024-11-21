//
// Created by victo on 06/11/2024.
//

#ifndef REINA_H
#define REINA_H

void Reiarriba(struct pieza p[8][8], int x, int y);
void Reiabajo(struct pieza p[8][8], int x, int y);
void Reiderecha(struct pieza p[8][8], int x, int y);
void Reiizquierda(struct pieza p[8][8], int x, int y);
void ReidiagAbD(struct pieza p[8][8], int x, int y);
void ReidiagAbI(struct pieza p[8][8], int x, int y);
void ReidiagAD(struct pieza p[8][8], int x, int y);
void ReidiagAI(struct pieza p[8][8], int x, int y);
void checkMov(struct pieza tablero[8][8], int x, int y);
void menuRei(struct pieza tablero[8][8], int x, int y);

#endif //REINA_H
