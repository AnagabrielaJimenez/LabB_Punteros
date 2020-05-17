//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)

#include <iostream>

using namespace std;

int tam_R(char *punt, int i){
    int tam=0;
    if(*(punt+i)=='\0')
        return tam;
    else 
        return tam + tam_R(punt, ++i) + 1;
}

int tam_I(char *punt){
    int tam=0, i=0;
    while(*(punt+i)!='\0'){
        tam++;
        i++;
    }
    return tam;
}

int main(){
    char a[]="Laboratorio B";
    char *ptr;
    ptr=a;
    cout<<"Tamaño de cadena de forma Iterativa: "<<tam_I(ptr)<<endl;
    cout<<"Tamaño de cadena de forma Recursiva: "<<tam_R(ptr,0)<<endl;
}