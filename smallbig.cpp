#include <bits/stdc++.h>

using namespace std;
int main() {
    int a,b,c;
    char x = '+';
    char y = '=';
    cin >> a >> x >> b >> y >> c;
    if ( x == '+' and y == '=' and a+b==c) {cout << "true" << endl;}
    else cout << "false" << endl;
}