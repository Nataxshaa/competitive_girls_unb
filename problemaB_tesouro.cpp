#include <iostream>
#include <string>
using namespace std;

int main() {
    int cont = 0; // Inicializa a variável i com 0
    int i;
    cin >> i; // Lê o valor de i

    std::string palavra;
    std:: cin >> palavra;

  
    

    for (size_t n = 0; n < palavra.length(); n++){ // Percorre cada caractere da palavra e o laço para quando n for igual ao tamanho da palavra

        if (palavra[n] == 'x') { 
            cont++; // Incrementa i em 1 se o caractere for 'x'
        }
       
    }
     std:: cout << cont << std::endl; // Imprime o valor de i e a palavra
    return 0;
}