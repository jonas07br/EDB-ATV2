#include <iostream>
#include <random>
#include <chrono>

using namespace std;

/*Implemente um dos algoritmos de ordenação por distribuição: escolha entre o
 counting sort e o radix sort.*/

void coutingSort(int lista[],int tam){
    //todo

}
int main(){
    int x =0;
    cin >> x;
    int lista[x];

    for(int i =0;i<x;i++){
        lista[x] = rand()%x +1;
        cout << lista[x] << endl;
    }
    coutingSort(lista,5);

}



