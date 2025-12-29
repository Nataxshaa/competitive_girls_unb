#include <iostream>
using namespace std;
//sempre em ordem crescente
// a = menor, b = meio c = maior.

int main(){
    int x, y,z;
    cin >> x >> y >> z;

   if (x == y && y == z && y ==x){
    cout << 3;
   } else if ((x + y) < z || (y+z) < x || (z+x) < y){
    cout << 1;
   } else if (x < y || y < z || y < x){
    cout << 2;
   }

   return 0;
}