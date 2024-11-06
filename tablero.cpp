//
// Created by victo on 31/10/2024.
//
#include <string.h>
#include "Piezas/Pieza.h"

struct pieza tablero[8][8];

void setTablero() {

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            tablero[i][j].simbolo = "";
        }
    }

    for (int i = 0; i < 8; i++) {
        //Peon Blanco
        tablero[6][i].color = 'b';
        tablero[6][i].simbolo = "♙";

        //Peon Negro
        tablero[1][i].color = 'n';
        tablero[1][i].simbolo = "♟";
    }

    //Piezas negras
    //Rey [fila][columna]
    tablero[0][3].color = 'n';
    tablero[0][3].simbolo = "♚";
    //Reina
    tablero[0][4].color = 'n';
    tablero[0][4].simbolo = "♛";
    //Alfil
    tablero[0][2].color = 'n';
    tablero[0][2].simbolo = "♝";
    tablero[0][5].color = 'n';
    tablero[0][5].simbolo = "♝";
    //Caballo
    tablero[0][1].color = 'n';
    tablero[0][1].simbolo = "♞";
    tablero[0][6] = tablero[0][1];
    //Torre
    tablero[0][7].color = 'n';
    tablero[0][7].simbolo = "♜";
    tablero[0][0] = tablero[0][7];

    //Piezas Blancas
    //Rey [fila][columna]
    tablero[7][3].color = 'b';
    tablero[7][3].simbolo = "♔";

    //Reina
    tablero[7][4].color = 'b';
    tablero[7][4].simbolo = "♕";

    //Alfil
    tablero[7][2].color = 'b';
    tablero[7][2].simbolo = "♗";
    tablero[7][5] = tablero[7][2];

    //Caballo
    tablero[7][1].color = 'b';
    tablero[7][1].simbolo = "♘";
    tablero[7][6] = tablero[7][1];

    //Torre
    tablero[7][0].color = 'b';
    tablero[7][0].simbolo = "♖";
    tablero[7][7] = tablero[7][0];

}

void printTablero(bool* RB, bool* RN) {
    setlocale(LC_CTYPE, "");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(strcmp(tablero[i][j].simbolo, "") == 0) {
            }else {
                printf("%s  ",tablero[i][j].simbolo);
            }
            if (strcmp(tablero[i][j].simbolo, "♚") == 0) {
                *RN = true;
            }
            if (strcmp(tablero[i][j].simbolo, "♔") == 0) {
                *RB = true;
            }
        }
        printf("\n");
    }
}

char numaChar(int Y) {
    switch (Y+1) {
        case 1:
            return 'a';
        case 2:
            return 'b';
        case 3:
            return 'c';
        case 4:
            return 'd';
        case 5:
            return 'e';
        case 6:
            return 'f';
        case 7:
            return 'g';
        case 8:
            return 'h';
    }
}

void listaPiezas(char C) {
    char tmp;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(tablero[i][j].color == C) {
                printf("%s  ", tablero[i][j].simbolo);
                tmp = numaChar(j);
                printf("%d %c\n", i + 1, tmp);
            }
        }
        printf("\n");
    }
}