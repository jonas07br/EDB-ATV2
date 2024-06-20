#include <iostream>
#include <random>
#include <vector>
using namespace std;
/**/
void mostrarvetor(vector<int> vetor){
    for(int i =0; i<vetor.size();i++ ){
        cout << vetor[i] << "-";
    }
}
/*QUESTAO 1
Implemente um algoritmo que recebe como entrada o tamanho N do vetor e
retorna um vetor de tamanho N como valores aleatórios variando de 0 a N.*/
vector<int> criarVetor(int tam){
    vector<int> vetor(tam);
    for(int i =0; i<tam;i++){
        vetor[i] = rand()%tam+1;
    }
    return vetor;
}
/* QUESTAO 2
Implemente um algoritmo que dado um vetor de entrada A, retorne
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
/* QUESTAO 3
Implemente um dos algoritmos de complexidade O(n²): escolha entre o
 algoritmo insertion sort e o selection sort.*/
void selectionSort(vector<int> vetor,int tam){
    int j,min_value;
    
    for(int i = 0; i<tam-1;i++){

        min_value=i;
        for(j=i+1;j<tam;j++){
            if(vetor[j]<vetor[min_value]){
                min_value=j;
            }
        }

        if(min_value!=i){
            int aux =vetor[min_value];
            vetor[min_value]=vetor[i];
            vetor[i]=aux;
            
        }
    }
    for(int s =0 ;s<tam;s++){
        cout << vetor[s] << "-";
    }

}
/* QUESTAO 4
Implemente um dos algoritmos de complexidade O(nlogn): escolha entre o
 algoritmo merge sort e o insertion sort.
*/
vector<int> insertionSort(vector<int> vetor,int tam){
    int i, key, j;
    for (i = 1; i < tam; i++) {
        key = vetor[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, 
        // to one position ahead of their
        // current position
        while (j >= 0 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = key;
    }
    return vetor;
}


int main(){
    
    int x =0;
    cin >> x;
    vector<int> vetor = criarVetor(x);
    cout << "VETOR GERADO ALEATORIAMENTE" << endl;
    mostrarvetor(vetor);
    cout << endl;
    
    cout << "TESTE QUESTAO 3 - SELECTION SORT" << endl;
    selectionSort(vetor,x);
    cout << endl;

    
    cout << "TESTE QUESTAO 4 - INSERTION SORT" << endl;
    mostrarvetor(insertionSort(vetor,x));
    cout << endl;

    
    cout << "TESTE DA QUESTAO 2" << endl;
    if(isOrdered(vetor)){
        cout << "Esta ordenado";
    }
    else{
        cout << "Nao esta ordenado";
    }



    
    return 0;
}