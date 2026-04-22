#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    int v[n]; // vetor de tamanho n
    
    for (int i = 0; i < n; i++){
        cin >> v[i];// lendo os valores do vetor  
    }

    int maximo = v[0];// inicializando o máximo com o primeiro elemento do vetor

    for (int i = 1; i < n; i++){
        if (v[i] > maximo){ // comparando o máximo com os outros elementos do vetor
            maximo = v[i]; // atualizando o máximo
        }
    }

    cout << maximo << endl; // imprimindo o máximo
    
    return 0;
}
