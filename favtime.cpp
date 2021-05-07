#include <bits/stdc++.h>

using namespace std;
int main() {
    int a,b,c;
    char x;
    
    cin >> a >> x >> b >> c;
    for (int i = 0; i<a; i++ ) 
        for(int j = 0; j<b;j++)
            for(int k = 0; k<c;k++) {
                if(a < 4 & b < 5 & c < 9 and x == ':' ) {
                    for(int n = 0; b > a and c > b; n++)
                        cout << a << ":" << b << c << endl;
                }
                
            }
}