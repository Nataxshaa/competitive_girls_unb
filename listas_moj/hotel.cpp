#include <iostream>
using namespace std;

int main(){
    int d, a, n, valor;

    cin >> d >> a >> n; //n valor dos dias, conta é n -1 (quantidade de dias); 
    //formula é d + (n-1)*a

    if (n <= 15){
        valor = d + (n-1) * a;
    } else{
        valor = d + 14 * a; 
    }

    int diaria = 32 - n;
    int valorto = diaria * valor;

    cout << valorto << endl;

    return 0;
}