//Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b.

#include <iostream>

using namespace std;

void imprimir(char *punt, int len){
    for(int i=0; i<len; i++){
        cout<<*punt++;
    }
}

int tam_C(char *punt){
    int tam=0, i=0;
    while(*punt++!='\0'){
        tam++;
    }
    return tam;
}

void copiar_C(char *punt1, char *punt2){
    while(*punt1!='\0'){
        *punt2++=*punt1++;
    }
}

int main(){
    char a[]="Cadenas y Arreglos";
    char *ptra=a;
    char b[tam_C(ptra)];
    char *ptrb=b;
    copiar_C(ptra,ptrb);
    imprimir(ptrb,tam_C(ptra));
}