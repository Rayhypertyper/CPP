#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int apple;
    int banana;

    cin >> d >> c >> a >> f >> e >> b;
 
    apple = a*1+c*2+d*3;
    banana = b*1+e*2+f*3; 

    if ( apple < banana) {cout << "B" << endl;}
    else
    if (banana <  apple ) {cout << "A" << endl;}
    else
    if (banana ==  apple) {cout << "T" << endl;}
    
    return 0;
}