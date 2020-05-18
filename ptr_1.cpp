//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//(Iterativa y recursiva).

#include <iostream>

using namespace std;

int suma_R(int *punt, int tam){
    if(tam==1){
        return *punt;
    }
    else{
        int *pont;
        pont=punt+tam-1;
        return *pont + suma_R(punt, --tam);
    }
}

int suma_I(int *punt, int tam){
    int sum=0;
    for(int i=0; i<tam; i++){
        sum+=*punt;
        punt++;
    }
    return sum;
}

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int *ptr=arr;
    cout<<"Suma iterativa: "<<suma_I(ptr,9)<<endl;
    cout<<"Suma recursiva: "<<suma_R(ptr,9)<<endl;
}