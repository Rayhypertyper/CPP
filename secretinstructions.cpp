#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    int num;
    int a = (num % 10);
    int b = (num / 10) % 10;
    int c = ((((num - a) / 10) - (b)) / 10 % 10);
    int d = ((((num - a) / 10 - (b)) / 10) - c) / 10 % 10;
    int e = (((((num - a) / 10 - (b)) / 10) - c) / 10 - d) / 10 % 10;
    

while(x++){
    cin >> num;
    if ((e + d) % 2 == 0) {
        cout << "right " << c << b << a << endl;
        if (e+d == 0) cout << "right" << endl;
        } 
        
    if ((e + d) % 2 == 1) {
        cout << "left " << c << b << a << endl;
        if (e+d == 0) cout << "left" << endl;
    }
    if(num = 99999) {
        break;
    }
    
   

    }
}