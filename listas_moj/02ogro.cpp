#include <iostream>
using namespace std;

int main(){
    int e;
    int d; 

    cin >> e;
    cin >> d;

    if (e >= 0 && e <= 5 && d >= 0 && d <= 5 && e != d) {
        if(e > d){
            cout << e + d;
        } else {
            cout << 2 *(d-e);
        }
        

    }
}
