//Implementar una función que ordene los elementos de un arreglo: ascendente.

#include <iostream>

using namespace std;

void imprimir(int *punt, int len){
    for(int i=0; i<len; i++){
        cout<<*punt++;
    }
}

void swap(int &a, int &b){
    a=a^b;
    b=b^a;
    a=a^b;

}

void ascendente(int *punt, int t){
    int *pont;
    pont=punt+1;
    for(int i=0; i<t; i++){         //Ordenamiento Burbuja
        for(int j=i+1; j<t; j++){ 
            if(*punt>*pont){
                swap(*punt, *pont);
                pont=pont+1;
            }
            else
            {
                pont=pont+1;
            }
            
        }
        punt=punt+1;
        pont=punt+1;

    }
}

int main(){
    int arr[]={9,5,1,7,3,8,2,6,4};
    int *ptr=arr;
    ascendente(ptr,9);
    cout<<"Arreglo ordenado: ";
    imprimir(ptr,9);

}