#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    //momento de armazenanmento
    vector<string> lista(n);
    
    //leitura das palavras
    for (int i = 0; i < n; i++){
        cin >> lista[i]; // le do teclado e guarda na memória
        // guarda as palavras e a cada vez que o for repete guarda 
        //lista[0], lista[1]... ate i valor de n.
    }

    //momento de processamento
    for (int i = 0; i < n; i++){
        string s = lista[i];
        int tam = s.size(); //pega o tamanho da palavra

        if (s.size() > 10){
            cout << s[0] << tam - 2 << s[tam - 1] << endl;

        } else {
            cout << s << endl;
        }
    }
}
