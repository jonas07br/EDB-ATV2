#include <iostream>
#include <random>
#include <vector>
#include <chrono>

using namespace std;

/* Implemente um algoritmo que dado um vetor de entrada A, retorne
 verdadeiro em caso do vetor está ordenado e falso caso contrário.*/
bool isOrdered(vector<int> vetor){
    int vetorLenght = vetor.size();
    for(int x = 0;x< (vetorLenght)-1;x++){
        if(vetor[x]>vetor[x+1]){
            return false;
        }
    }
    return true;
}
int main(){
    
    int a =0;
    cin >> a;
    vector<int> vetor(a);

    auto inicio =chrono::high_resolution_clock::now();

    for(int i =0; i<a;i++){
        vetor[i] = rand()%a +1;
        cout << vetor[i] << "-";
    }
    if(isOrdered(vetor)){
        cout << "Vetor ordenado" << endl;
    }
    else{
        cout << "Vetor nao ordenado" << endl;
    }


    auto tempo = chrono::high_resolution_clock::now() - inicio;
    long long microseconds = chrono::duration_cast<std::chrono::milliseconds>(tempo).count();
    cout <<"Tempo de execucaoo em milisegundos: "<< microseconds << endl;
    
    return 0;
}