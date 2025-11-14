#include <iostream>
#include <string>
using namespace std;       

int main(){
    int x =0;
    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++){
        string instru;
        cin >> instru;

        if (instru.find("++") != string::npos){ //propiedade do c++, usa para encontra coisas, literalmente 
            x++;
        }
        else if (instru.find("--") != string::npos){
            x--;
        }
    }

    cout << x << endl;
    return 0;
} 