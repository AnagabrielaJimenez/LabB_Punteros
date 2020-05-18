//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).

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

void concatenar_C(char *punt1, char *punt2){
    char *pont;
    for (int i=tam_C(punt2); i<(tam_C(punt1)+tam_C(punt2)); i++){ 
        pont=punt2+i;
        *pont=*punt1++;
    }
}

int main(){
    char a[]="Laboratorio B";
    char b[30]="Curso De ";
    char *ptra=a, *ptrb=b;
    concatenar_C(ptra, ptrb);
    imprimir(ptrb,tam_C(b));
}