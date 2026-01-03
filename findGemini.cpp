#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    cin.ignore();
    int tot = 0;

    for( int i = 0; i < n; i++ ){
        string s;
        getline(cin,s); 

        if (s.find("ouro") != string::npos){
            tot = tot + 10;
        }if (s.find("prata") != string::npos){
            tot = tot + 5;
        }
    }   
    cout << tot << endl;
    return 0;
}