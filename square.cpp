#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    long long m, n, a;

    cin >> m >> n >> a;

    long long resultado1 = (m + a - 1)/a; //fórmula para arredondar números para cima;
    long long resultado2 = (n + a - 1)/a; 

    long long total = resultado1*resultado2;

    cout << total << endl; 
    return 0; 


}