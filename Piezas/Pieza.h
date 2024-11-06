//
// Created by victo on 31/10/2024.
//

#ifndef PIEZA_H
#define PIEZA_H

#include <stdbool.h>

struct pieza {
    char color;
    char *simbolo;
};

const char *DiAI = "↖";
const char *DiAD = "↗";
const char *DiAbI = "↙";
const char *DiAbD = "↘";
const char *Ar = "↑";
const char *Ab = "↓";
const char *Izq = "←";
const char *Der = "→";

void printTablero(bool* RB, bool* RN);
void setTablero();

void mueveP(struct pieza* origen, struct pieza* destino);

char numaChar(int Y);

void menuPrin(int* turn);
void menuN();
void menuB();
void listarPiezas(char C);

#endif //PIEZA_H