#include <bits/stdc++.h>
#include <string>
#include <cctype>
using namespace std;

 string toLowercase (string str){
        for (char &c : str){
            c = tolower(c);
        }
        return str;
    }

int main(){
    string v = "vivo!";
    string m = "morto!";
    string s;


    if (!getline(cin, s))
        return 0;

    s = toLowercase(s);
    m = toLowercase(m);
    v = toLowercase(v);
   

    if (s == v){
        cout << "\\o/" << endl;
    } else if (s == m){
        cout << "orz" << endl;
    }

    return 0;
}