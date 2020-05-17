//Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b.

#include <iostream>

using namespace std;

int tam_C(char *punt){
    int tam=0, i=0;
    while(*(punt+i)!='\0'){
        tam++;
        i++;
    }
    return tam;
}

void copiar_C(char *punt1, char *punt2){
    for(int i=0; i<tam_C(punt1); i++){
        *(punt2+i)=*(punt1+i);
    }
}

int main(){
    char a[]="Cadenas y ArreglosB";
    char *ptra;
    ptra=a;
    char b[tam_C(ptra)];
    char *ptrb;
    ptrb=b;
    copiar_C(ptra,ptrb);
    for(int i=0; i<30; i++){
        cout<<*(ptrb++);
    }
}