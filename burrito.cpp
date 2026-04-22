#include <bits/stdc++.h>
#include <string>
using namespace std;


/*string toUppercase (string str){
        for (char &c : str){
            c = toupper(c);
        }
        return str;
    }
int main(){
    string s; // burrito da iasmin
    string t; // burrito recebido 

    getline(cin, s);
    getline(cin, t);
    
    s = toUppercase(s);
    t = toUppercase(t);

    
    if(s.length() == t.length()){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}*/

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);

    int countS[5] = {0}; //inicializando no zero
    int countT[5] = {0};

    for (char c : s){
        countS[c - 'A']++; // contando as letras do burrito da iasmin
    }

    for(char c: t){
        countT[c - 'A']++; // contando as letras do burrito recebido
    }

    for (int i =0; i < 5; i++){
        if (countS[i] != countT[i]){ // comparando as letras dos burritos
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
