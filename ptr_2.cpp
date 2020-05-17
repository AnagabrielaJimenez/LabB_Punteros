//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).

#include <iostream>

using namespace std;

void swap(int* punt, int t, int i){
    int aux;
    aux=*(punt+i);
    *(punt+i)=*(punt+t-1);
    *(punt+t-1)=aux;
}

void invertirR(int *punt, int t, int i){
    if(i<=t){
        swap(punt,t,i);
        invertirR(punt, --t, ++i);
    }
}

int* invertirI(int *punt, int t){
    for(int i=0; i<t/2; i++){
        swap(punt, (t-i), i);
    }
    return punt;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9}, n=9;
    int *ptr;
    ptr=arr;
    ptr=invertirI(ptr,n);
    cout<<"Arreglo invertido iterativamente: ";
    for (int i=0; i<n; i++){
        cout<<*(ptr++);
    }
    cout<<endl;
    invertirR(ptr,n,0);
    cout<<"Arreglo invertido recursivamente: ";
    for(int i=0; i<n; i++){
        cout<<*(ptr++);
    }
}