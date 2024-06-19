#include <iostream>
#include <random>
#include <vector>
using namespace std;
//QUESTAO 1
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