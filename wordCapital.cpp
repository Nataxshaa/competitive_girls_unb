#include <iostream>
#include <string>
using namespace std;

int main(){
    string palavra;
    cin >> palavra;
    palavra[0] = toupper(palavra[0]);
    cout << palavra << endl;
    return 0;
}
   
