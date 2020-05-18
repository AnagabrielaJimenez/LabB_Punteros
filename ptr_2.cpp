//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).

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

void invertir_R(int *punt, int len, int i){
    if(i<(len+1)){
        int *pont;
        pont=punt+len-1;
        swap(*punt,*pont);
        punt=punt+1;
        invertir_R(punt, len-2, ++i);
    }
}

void invertir_I(int *punt, int len){
    int *pont;
    pont=punt+len-1;
    for(int i=0; i<len/2; i++){
        swap(*punt++,*pont--);
    } 
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9}, n=9;
    int *ptr=arr;
    invertir_I(ptr, 9);
    imprimir(ptr, 9);  
    cout<<endl;
    invertir_R(ptr, 9, 0);    
    imprimir(ptr, 9);
}