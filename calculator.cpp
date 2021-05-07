#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,sum;
    char x;
    cin >> a >> x >> b;
    if(x = '+') {cout << a << " + " << b << " = " << a+b << endl;}
    else
    if(x = '-') {cout << a << " - " << b << " = " << a-b << endl;}
    else
    if(x = '*') {cout << a << " * " << b << " = " << a*b << endl;}
    else 
    if(x = '/') {cout << a << " / " << b << " = " << a/b << endl;}
    else
    if(x = '_') {cout << a << " ^ " << b << " = " << pow(a,b) << endl;}
    
    
    
}