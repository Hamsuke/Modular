//
// Created by victo on 05/11/2024.
//

void checkMov(struct pieza copy[][], int x, int y) {

}

void arriba(struct tablero tab[][]){
    if(actY+1 > 8){
        cout<<"Movimiento no valido"<<endl;
    }else{
        cout<<"Movimiento valido"<<endl;
    }
}

void abajo(int actY){
    if(actY-1 < 1){
        cout<<"Movimiento no valido"<<endl;
    }else{
        cout<<"Movimiento valido"<<endl;
    }
}

void izquierda(int actX){
    if(actX-1 < 1){
        cout<<"Movimiento no valido"<<endl;
    }else{
        cout<<"Movimiento valido"<<endl;
    }
}

void derecha(int actX){
    if(actX+1 > 8){
        cout<<"Movimiento no valido"<<endl;
    }else{
        cout<<"Movimiento valido"<<endl;
    }
}