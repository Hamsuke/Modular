#include <string>
#include <iostream>
#include <random>

using namespace std;

string tablero[8][8];

// Piezas blancas (Unicode)
const string caballoBlanco = "\u2658";

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> distrib(0, 7);

// Revisar movimientos
void checkArribaI(int xAct, int yAct);
void checkArribaD(int xAct, int yAct);
void checkDerechaI(int xAct, int yAct);
void checkDerechaD(int xAct, int yAct);
void checkIzquierdaI(int xAct, int yAct);
void checkIzquierdaD(int xAct, int yAct);
void checkAbajoI(int xAct, int yAct);
void checkAbajoD(int xAct, int yAct);


void checkArribaI(int xAct, int yAct) {
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


void mostrarTablero() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (tablero[i][j] == "") {
                cout << " . ";
            } else {
                cout << tablero[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}


void movArribaI(int &x, int &y) {
    x += 1;
    y += 2;
}

void movArribaD(int &x, int &y) {
    x -= 1;
    y += 2;
}

void movDerechaI(int &x, int &y) {
    x += 2;
    y += 1;
}

void movDerechaD(int &x, int &y) {
    x += 2;
    y -= 1;
}

void movIzquierdaI(int &x, int &y) {
    x -= 2;
    y -= 1;
}

void movIzquierdaD(int &x, int &y) {
    x -= 2;
    y += 1;
}

void movAbajoI(int &x, int &y) {
    x -= 1;
    y -= 2;
}

void movAbajoD(int &x, int &y) {
    x += 1;
    y -= 2;
}

int main() {
    char mover;
    int x = distrib(gen);
    int y = distrib(gen);

    tablero[x][y] = caballoBlanco;
    cout << "Posicion inicial: (" << y + 1 << "," << x + 1 << ")" << endl;

    do {
        mostrarTablero();
        cout << "Desea mover el caballo? (y/n)" << endl;
        cin >> mover;

        if (mover == 'y') {
            checkArribaI(x, y);
            checkArribaD(x, y);
            checkDerechaI(x, y);
            checkDerechaD(x, y);
            checkIzquierdaI(x, y);
            checkIzquierdaD(x, y);
            checkAbajoI(x, y);
            checkAbajoD(x, y);

            int opcion;
            cout << "Elija el movimiento: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    tablero[x][y] = "";
                    movArribaI(x, y);
                    break;
                case 2:
                    tablero[x][y] = "";
                    movArribaD(x, y);
                    break;
                case 3:
                    tablero[x][y] = "";
                    movDerechaI(x, y);
                    break;
                case 4:
                    tablero[x][y] = "";
                    movDerechaD(x, y);
                    break;
                case 5:
                    tablero[x][y] = "";
                    movIzquierdaI(x, y);
                    break;
                case 6:
                    tablero[x][y] = "";
                    movIzquierdaD(x, y);
                    break;
                case 7:
                    tablero[x][y] = "";
                    movAbajoI(x, y);
                    break;
                case 8:
                    tablero[x][y] = "";
                    movAbajoD(x, y);
                    break;
                default:
                    cout << "Opcion no valida" << endl;
                    continue;
            }
            tablero[x][y] = caballoBlanco;
        }

    } while (mover == 'n');

    return 0;
}
