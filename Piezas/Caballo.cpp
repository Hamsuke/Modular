//
// Created by victo on 05/11/2024.
//

#include "Pieza.h"

void checkArribaI() {
    if (xAct + 1 < 8 && yAct + 2 < 8) {
        cout << "1. Movimiento valido: (" << xAct + 1 << "," << yAct + 2 << ")" << endl;
    }
}

void checkArribaD(int xAct, int yAct) {
    if (xAct - 1 >= 0 && yAct + 2 < 8) {
        cout << "2. Movimiento valido: (" << xAct + 1 << "," << yAct + 2 << ")" << endl;
    }
}

void checkDerechaI(int xAct, int yAct) {
    if (xAct + 2 < 8 && yAct + 1 < 8) {
        cout << "3. Movimiento valido: (" << xAct + 2 << "," << yAct + 1 << ")" << endl;
    }
}

void checkDerechaD(int xAct, int yAct) {
    if (xAct + 2 < 8 && yAct - 1 >= 0) {
        cout << "4. Movimiento valido: (" << xAct + 2 << "," << yAct - 1 << ")" << endl;
    }
}

void checkIzquierdaI(int xAct, int yAct) {
    if (xAct - 2 >= 0 && yAct - 1 >= 0) {
        cout << "5. Movimiento valido: (" << xAct - 2 << "," << yAct - 1 << ")" << endl;
    }
}

void checkIzquierdaD(int xAct, int yAct) {
    if (xAct - 2 >= 0 && yAct + 1 < 8) {
        cout << "6. Movimiento valido: (" << xAct - 2 << "," << yAct + 1 << ")" << endl;
    }
}

void checkAbajoI(int xAct, int yAct) {
    if (xAct - 1 >= 0 && yAct - 2 >= 0) {
        cout << "7. Movimiento valido: (" << xAct - 1 << "," << yAct - 2 << ")" << endl;
    }
}

void checkAbajoD(int xAct, int yAct) {
    if (xAct + 1 < 8 && yAct - 2 >= 0) {
        cout << "8. Movimiento valido: (" << xAct + 1 << "," << yAct - 2 << ")" << endl;
    }
}