#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // numero de rodadas

    string s; 
    cin >> s; // string dos vencedores de cada rodada

    int countIsa = 0;
    int countLucas = 0;
    int countAmigo1 = 0;
    int countOutro = 0;

    int mx_pontos = 0;
    string vencedor = "";

    for (char c : s){
        if (c == 'l'){
            countLucas++;
            if (countLucas > mx_pontos){
                mx_pontos = countLucas;
                vencedor = "Lucas";
            }
        } else if (c == 'I'){
            countIsa++;
            if (countIsa > mx_pontos){
                mx_pontos = countIsa;
                vencedor = "Isa";
            }
        } else if (c == '1'){
            countAmigo1++;
            if (countAmigo1 > mx_pontos){
                mx_pontos = countAmigo1;
                vencedor = "Amigo  1";
            }
        } else if ( c == '|'){
            countOutro++;
            if (countOutro > mx_pontos){
                mx_pontos = countOutro;
                vencedor = "Outro amigo";
            }
        }
    }
     cout << vencedor << endl;
}