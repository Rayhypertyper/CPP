#include <bits/stdc++.h>

using namespace std;

int main() {
    int y, z;
    vector < char > x = {'A', 'B', 'C', 'D', 'E'};
    cin >> z;
    while (z != 4) {
        cin >> y >> z;
        if (y == 1) {
            for (int i = 0; i < y; i++) {
                swap(x[0],x[4]);
                swap(x[0],x[3]);
                swap(x[0],x[2]);
                swap(x[0],x[1]);  
            }
        } else if (y == 2) {
            for (int i = 0; i < y; i++) {
                swap(x[4],x[0]);
                swap(x[3],x[1]);
                swap(x[2],x[2]);
                swap(x[1],x[3]);      
            }
        } else if (y == 3) {
            for (int i = 0; i < y; i++) {
                swap(x[0], x[1]);
            }
        }  else if(y == 4) {
            for (int i = 0; i < y; i++){
                cout << x[i] << " ";
            }
        }
        
        
        }

    }
