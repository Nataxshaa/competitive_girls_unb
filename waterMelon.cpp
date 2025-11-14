#include <iostream>
using namespace std;

int main(){
    int peso;

    cin >> peso;

    if(peso % 2 == 0 && peso != 2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}