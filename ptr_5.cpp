//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).

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

void concatenar_C(char *punt1, char *punt2){
    int j=0;
    for (int i=tam_C(punt2); i<(tam_C(punt1)+tam_C(punt2)); i++){ 
        *(punt2+i)=*(punt1+j);
        j++;
    }
}

int main(){
    char a[]="Laboratorio B";
    char b[30]="Curso De ";
    char *ptra, *ptrb;
    ptra=a;
    ptrb=b;
    concatenar_C(ptra, ptrb);
    for(int i=0; i<30; i++){
        cout<<*(ptrb++);
    }
}