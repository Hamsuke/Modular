//
// Created by victo on 06/11/2024.
//

#ifndef ALFIL_H
#define ALFIL_H

void diaAbD(struct pieza p[8][8], int x, int y);
void diaAbI(struct pieza p[8][8], int x, int y);
void diaAD(struct pieza p[8][8], int x, int y);
void diaAI(struct pieza p[8][8], int x, int y);
void checkMovAl(struct pieza tablero[8][8], int x, int y);
void menuAl(struct pieza tablero[8][8], int x, int y);

#endif //ALFIL_H