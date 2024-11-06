//
// Created by victo on 05/11/2024.
//

void arriba(int actY){
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

void arribaD(int actX, int actY){
    if(actX+1 > 8 or actY+1 > 8){
        cout<<"Movimiento no valido"<<endl;
    }else{
        cout<<"Movimiento valido"<<endl;
    }
}

void arribaI(int actX, int actY){
    if(actX - 1 < 1 or actY + 1 > 8){
        cout<<"Movimiento no valido"<<endl;
    }else{
        cout<<"Movimiento valido"<<endl;
    }
}

void abajoD(int actX, int actY){
    if(actX + 1 < 8 or actY - 1){
        cout<<"Movimiento no valido"<<endl;
    }else{
        cout<<"Movimiento valido"<<endl;
    }
}