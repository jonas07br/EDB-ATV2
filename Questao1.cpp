#include <iostream>
#include <random>
#include <vector>
using namespace std;
//QUESTAO 1
//Implemente um algoritmo que recebe como entrada o tamanho N do vetor e
// retorna um vetor de tamanho N como valores aleatórios variando de 0 a N.

int main(){
    int x =0;
    cin >> x;
    vector<int> vetor(x);
    for(int i =0; i<x;i++){
        vetor[x] = rand()%x +1;
        cout << vetor[x] << endl;
    }
    return 0;
}