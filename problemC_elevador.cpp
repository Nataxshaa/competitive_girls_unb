#include <iostream>

int main(){
    int andar;
   
    std:: cin >> andar;

    int soma_esperada = andar * (andar + 1) / 2;
    int soma_recebida = 0;

    for (int i = 0; i < andar - 1; i++){
        int num;
        std:: cin >> num;
        soma_recebida += num;
    }

    std:: cout << soma_esperada - soma_recebida << std::endl;
    return 0;
}