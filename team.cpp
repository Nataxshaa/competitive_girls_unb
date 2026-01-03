#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;//quantidade de problema
    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++){ // esse for é para o loop da quantidade de problemas
        // faz a verificação das somas
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b +c >= 2){
            total++;
        }
    }

    cout << total << endl;

    return 0;

}

/*Repetição (i)	O que o cin lê (a b c)	A conta (a+b+c)	A condição (>= 2)	O que acontece com total?
i = 0 (1ª volta)	       1 1 0          1+1+0=2	        Sim (2 é ≥            Sobe de 0 para 1
i = 1 (2ª volta)	       0 1 1	      0+1+1=2	        Sim (2 é ≥ 2)	      Sobe de 1 para 2
i = 2 (3ª volta)	       1 0 0	      1+0+0=1	        Não (1 não é ≥ 2)	   Continua valendo 2*/