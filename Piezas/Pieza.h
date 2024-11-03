//
// Created by victo on 31/10/2024.
//

#ifndef PIEZA_H
#define PIEZA_H

struct pieza {
    //char nombre[10] = '';
    char color;
    char *simbolo;
};

void printTablero(bool& RB, bool& RN);
void setTablero();

void mueveP(struct pieza& origen, struct pieza& destino);

bool peonN(struct pieza& origen, struct pieza& destino);
bool peonB(struct pieza& origen, struct pieza& destino);
bool rey(struct pieza& origen, struct pieza& destino);
bool reina(struct pieza& origen, struct pieza& destino);
bool torre(struct pieza& origen, struct pieza& destino);
bool alfil(struct pieza& origen, struct pieza& destino);
bool caballo(struct pieza& origen, struct pieza& destino);


void menuPrin();
void menuN();
void menuB();


#endif //PIEZA_H
