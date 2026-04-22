#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> v(n); // vetor de tamanho n

    int countPar = 0; // contador de números pares 
    int quantosPares = 0; // variável para armazenar a quantidade de números pares

    for (int i = 0; i < n; i++){
        cin >> v[i]; // lendo os valores do vetor  

        if (v[i] % 2 == 0){
            countPar++; // incrementando o contador de números pares
            quantosPares = countPar; // atualizando a quantidade de números pares
        }

    } 
    cout << quantosPares << endl; // imprimindo a quantidade de números pares
    return 0;
} 