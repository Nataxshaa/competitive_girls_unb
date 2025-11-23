#include <iostream>
using namespace std; 

int main(){
    int amg1, amg2;
    int valor; 
    int valor2; 
    
    cin >> amg1 >> amg2;

    if (amg1 <= 17){
        valor = 15;
    } else if (amg1 >= 18 && amg1 <= 59){
        valor = 30;
    } else {
        valor = 20;
    }


    if (amg2 <= 17){
        valor2 = 15;
    } else if (amg2 >= 18 && amg2 <= 59){
        valor2 = 30;
    } else{
        valor2 = 20;
    }
    
    
    int soma = valor + valor2;
    
    cout << soma << endl;
    return 0;
    
}