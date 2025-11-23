#include <iostream>
#include <string>
using namespace std;

int main() {

    int p,d,b;
     cin >> p >> d >> b;
    int psum = 1*p;
    int dsum = 2*d;
    int bsum = 3*b;

    int sum = psum + dsum + bsum;

   

    if (sum >= 150){
       cout << "B" << endl;
    } else if (sum >= 120 && sum < 150){
        cout << "D" << endl;
    } else if (sum >= 100 && sum < 120 && sum < 150){
        cout << "P" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}