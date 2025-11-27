#include <iostream>
using namespace std;
//sempre em ordem crescente
// a = menor, b = meio c = maior.

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if ((a+b) < c ){
        cout << 1;
    } else if ( a == b && b == c && c == a){
        cout << 3; 
    } else{
        cout << 2;
    }
}