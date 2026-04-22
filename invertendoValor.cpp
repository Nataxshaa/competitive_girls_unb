#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n; 
    vector<int> v(n); // vetor de tamanho n

    for (int i = 0; i < n; i++){
        cin >> v[i]; // lendo os valores do vetor  
    }

    //reverse(v.begin(), v.end()); // invertendo a ordem dos elementos do vetor

   for (int i = n-1; i >= 0;i--){
        cout << v[i] << " "; // imprimindo os elementos do vetor invertido
   }
    cout << endl; // pulando para a próxima linha após imprimir o vetor invertido
    return 0;

}