//
// Created by victo on 31/10/2024.
//

#ifndef PIEZA_H
#define PIEZA_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct pieza {
    char color;
    char *simbolo;
};



char *DiAI = "↖";
char *DiAD = "↗";
char *DiAbI = "↙";
char *DiAbD = "↘";
char *Ar = "↑";
char *Ab = "↓";
char *Izq = "←";
char *Der = "→";

void printTablero(bool* RB, bool* RN);
void setTablero();

void mueveP(struct pieza* origen, struct pieza* destino);

char numaChar(int Y);
int charaNum(char Y);

void menuPrin(int* turn);
void menuN();
void menuB();

void listarPiezas(char C);

#endif //PIEZA_H