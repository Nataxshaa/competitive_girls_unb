#include <iostream>
using namespace std;
#include <string>
#include <vector>


int main(){
    vector<int> n = {4, 7};

    for (int i = 0; i <= 1000; i++){
        if (n[i] % 7 == 0 || n[i] % 4 == 0){
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
      
}