#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    int x = 0;

    for (int i = 0; i < n; i++){
        string ins;
        cin >> ins;

        if(ins.find("++") != string::npos){
            x++; // x começa em x=0, se achar o x++ passa a ser x = 1
        }else if(ins.find("--") != string::npos){
            x--; // se achar x-- o fica 1 - 1 = 0;
        }
    }

    cout << x << endl;
    return 0;

}