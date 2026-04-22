#include <bits/stdc++.h>
#include <vector>

int main(){
    // n = número de participantes 
    //k = número de corte ou seja, k = 4, o corte é o 4º lugar

    int n, k;
    // n = nº de participante, k = posição de corte, a = notas;

    cin >> n, k;
    cin >> a;

    vector<int> notas(a);

    for (int i = 0; i< n; i++){
        cin >> notas[i];
    }

    for (int i = 0; i <n; i++){
        int notas
        a = notas[i];
        int kh = notas[i]-1;

        if (a > kh && a > 0){
            int pass = a + 1; 
            cout << pass << endl;
        }

        return 0; 
            
    }
}