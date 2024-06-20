#include <iostream>
#include <random>
#include <chrono>

using namespace std;
/*QUESTAO 3
Implemente um dos algoritmos de complexidade O(n²): escolha entre o
 algoritmo insertion sort e o selection sort.
 */

void selectionSort(int lista[],int tam){
    int i,j,min_value;
    for(int i = 0; i<tam-1;i++){
       
        min_value=i;
        for(j=i+1;j<tam;j++){
            if(lista[j]<lista[min_value]){
                min_value=j;
            }
        }

        if(min_value!=i){
            swap(lista[min_value],lista[i]);
        }
    }
    for(int s =0 ;s<tam;s++){
        cout << lista[s] << "-";
    }

}

int main(){
    int x =0;
    cin >> x;
    int lista[x];
    for(int i =0; i<x;i++){
        lista[i] = rand()%x +1;
        
    }
    selectionSort(lista,x);
}
