#include <iostream>
using namespace std;
#include <string>

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    int max = 0;

   int res1 = a + b+ c;
   int res2 = a * b * c; 
   int res3 = (a + b) * c;
   int res4 = a * (b + c);
   int res5 = a + (b * c);
   int res6 = (a * b) + c;  

   max = res1 ? res1 : max;
   max = res2 > max ? res2 : max;
   max = res3 > max ? res3 : max;
   max = res4 > max ? res4 : max;
   max = res5 > max ? res5 : max;
   max = res6 > max ? res6 : max;     

    cout << max << endl;
    
     return 0;

}