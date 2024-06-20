#include <iostream>
#include <random>
#include <vector>
#include <chrono>

using namespace std;
/*QUESTAO 3
Implemente um dos algoritmos de complexidade O(n²): escolha entre o
 algoritmo insertion sort e o selection sort.
 */

int main(){
    int x =0;
    cin >> x;
    vector<int> lista(x);
    cout << "lista gerada aleatoriamente" << endl;
    for(int i =0; i<x;i++){
        lista[i] = rand()%x +1;
        
    }
    cout << endl;

    auto inicio =chrono::high_resolution_clock::now();

    for(int z =0 ;z<x-1;z++){
        int aux=0;
        if(lista[z]>lista[z+1]){
            aux=lista[z+1];
            lista[z+1]=lista[z];
            lista[z]=aux;
        }
        int w =z-1;
        while(w>=0){
            if(aux<lista[w]){
                lista[w+1]=lista[w];
                lista[w]=aux;
            }
            else{
                break;
            }
            w=w-1;
        }
    }
    cout << "lista ordenada com insertion sort" << endl;
    for(int i =0; i<x;i++){
    }
    cout << endl;

    auto tempo = chrono::high_resolution_clock::now() - inicio;
    long long microseconds = chrono::duration_cast<std::chrono::milliseconds>(tempo).count();
    cout <<"Tempo de execucaoo em milisegundos: "<< microseconds << endl;
    
}
