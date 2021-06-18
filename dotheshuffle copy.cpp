#include <bits/stdc++.h>

using namespace std;

int main() {
    int y, z;
    vector < char > x = {'A', 'B', 'C', 'D', 'E'};

    while (z != 4) {
        cin >> y >> z;
        if (y == 1) {
            for (int i = 9; i < y; i++) {
            x.erase(x.begin());
            x.insert(x.end(),x.front());    
            }
        } else if (y == 2) {
            for (int i = 0; i < y; i++) {
            x.erase(x.end());
            x.insert(x.begin(),x.back)    
            }
        } else if (y == 3) {
            for (int i = 0; i < y; i) {
                swap(x[0], x[1]);
            }
        }  else if(y == 4) {
            for (int i = 0; i < y; i++){
                break;
            }
        }
            for(int i = 0; i < 5; i++){
                cout << x[i] << " " << endl;
        }

    }
}