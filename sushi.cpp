#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // numero de sequências de sushi

    vector<int> susho(n);

    ll soma_par = 0;
    ll soma_impar = 0;

    
    for (int i = 0; i < n; i++) {
        cin >> susho[i]; // lendo a quantidade de cada tipo de sushi
        if (i % 2 == 0){ // verificando se a quantidade de cada tipo de sushi é par
            soma_par += susho[i];
        } else {
            soma_impar += susho[i]; // verificando se a quantidade de cada tipo de sushi é impar
        }
    }

    if (soma_par > soma_impar){ // comparando a quantidade de tipos de sushi com quantidade par e impar
        cout << soma_par << endl;
    } else {
        cout << soma_impar << endl;
        
    }

    return 0;
}