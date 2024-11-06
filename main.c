#include <stdio.h>
#include <locale.h>

#include "tablero.cpp"

void menuB(){
    int X;
    char Y;
    listaPiezas('b');
    printf("Ingresa la fila de la pieza /n");
    scanf("%d",&X);
    printf("Ingresa la columna de la pieza /n");
    scanf("%c",&Y);
}

void menuN(){
    int X;
    char Y;
    listaPiezas('n');
    printf("Ingresa la fila de la pieza /n");
    scanf("%d",&X);
    printf("Ingresa la columna de la pieza /n");
    scanf("%c",&Y);
}

void menuPrin(int *turn) {
    printf("Eliga una pieza");
    if(*turn == 1) {
        menuB();
        (*turn)--;
    }else {
        menuN();
        (*turn)++;
    }
}

int main(void){
    bool RNV;
    bool RBV;
    int turno = 1;

    setlocale(LC_CTYPE, "");
    setTablero();

    do {
        RNV = false;
        RBV = false;
        printTablero(&RNV, &RBV);
        menuPrin(&turno);
    }while (RNV && RBV );
    if(RBV == false){
        printf("Jugador negro gana");
    } else{
        printf("Jugador blanco gana");
    }
    return 0;
}