#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    //a triplica no final do ano = a*3
    //b dobra no final do ano = b*2

    int anos = 0;

    for (anos = 0; a <= b; anos++){ // anos começa em 0, enquanto a for menor ou igual a b, 
        //anos recebe mais 1
        a = a*3;
        b = b*2;
    }

  
    cout << anos << endl;
      return 0;
}