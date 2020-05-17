//Implementar una función que ordene los elementos de un arreglo: ascendente.

#include <iostream>

using namespace std;

int* ascendente(int *punt, int t){
     int aux;
    for(int i=0; i<t; i++){         //Ordenamiento Burbuja
        for(int j=i+1; j<t; j++){   
            if(*(punt+i)>*(punt+j)){
                aux=*(punt+i);
                *(punt+i)=*(punt+j);
                *(punt+j)=aux;
            }
        }

    }
    return punt;
}

int main(){
    int arr[]={9,5,1,7,3,8,2,6,4}, n=9;
    int *ptr;
    ptr=arr;
    ptr=ascendente(ptr,n);
    cout<<"Arrelo ordenado: ";
    for(int i=0; i<n; i++){
        cout<<*(ptr++);
    }

}