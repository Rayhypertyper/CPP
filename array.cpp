#include <bits/stdc++.h>

using namespace std;
int main() {
    //int banana[5];
    //cout << banana << endl;
    int apple[3];
    cin >> apple[0];
    apple[0] = 1;
    apple[1] = 2;
    apple[2] = 3;
    
    for(int x = 0;x < sizeof(apple)/sizeof(apple[0]); x++) {
        cout << "x: " << x << endl;
        cout << apple[x] << endl;
       
    }
  
}