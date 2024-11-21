//
// Created by victo on 05/11/2024.
//

void ReiAldiaAbD(struct pieza p[8][8], int x, int y) {
    while (strcmp(p[x + 1][y + 1].simbolo, "") == 0 && p[x][y].color != p[x + 1][y + 1].color) {
        p[x + 1][y + 1].simbolo = DiAbD;
        x++;
        y++;
    }
}
void ReiAldiaAbI(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x + 1][y - 1].simbolo, "") == 0 && p[x][y].color != p[x + 1][y - 1].color) {
        p[x + 1][y - 1].simbolo = DiAbI;
        x++;
        y--;
    }
}
void ReiAldiaAD(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x-1][y+1].simbolo, "") == 0 && p[x][y].color != p[x-1][y+1].color) {
        p[x-1][y+1].simbolo = DiAbD;
        x--;
        y++;
    }
}

void ReiAldiaAI(struct pieza p[8][8], int x, int y){
    while (strcmp(p[x - 1][y - 1].simbolo, "") == 0 && p[x][y].color != p[x - 1][y - 1].color) {
        p[x - 1][y+1].simbolo = DiAI;
        x--;
        y--;
    }
}

void Reiarriba(struct pieza p[8][8], int x, int y){
    while (x - 1 > 0 && strcmp(p[x-1][y].simbolo, "") == 0){
        p[x-1][y].simbolo = Ar;
        x--;
    }
}

void Reiabajo(struct pieza p[8][8], int x, int y){
    while (x + 1 < 8 && strcmp(p[x + 1][y].simbolo, "") == 0){
        p[x + 1][y].simbolo = Ab;
        x++;
    }
}

void Reiizquierda(struct pieza p[8][8], int x, int y){
    while (y - 1 > 0 && strcmp(p[x][y - 1].simbolo, "") == 0){
        p[x][y - 1].simbolo = Izq;
        y--;
    }
}

void Reiderecha(struct pieza p[8][8], int x, int y){
    while (y + 1 < 8 && strcmp(p[x][y + 1].simbolo, "") == 0){
        p[x][y + 1].simbolo = Der;
        y++;
    }
}