#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


#include "Piezas/tablero.cpp"

void menuPrin(int *turn) {
    if(*turn == 1) {
        printf("Turno de jugador Blanco\n");
        printf("Eliga una pieza\n");
        menuB();
        (*turn)--;
    }else {
        printf("Turno de jugador Negro\n");
        printf("Eliga una pieza\n");
        menuN();
        (*turn)++;
    }
}

int main(void){


    bool RNV;
    bool RBV;
    int turno = 1;
    setlocale(LC_CTYPE, "en_US.UTF-8");
    setTablero();
    do {
        RNV = false;
        RBV = false;
        limpiarTablero();
        printTablero(&RNV, &RBV);
        menuPrin(&turno);
    }while (RNV && RBV);
    if(RBV == false){
        printf("Jugador negro gana");
    } else{
        printf("Jugador blanco gana");
    }
    return 0;
}