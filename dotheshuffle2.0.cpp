#include <bits/stdc++.h>

using namespace std;

int main() {
        int y, z;
        vector < char > x = {
            'A',
            'B',
            'C',
            'D',
            'E'
        };

        while (z != 4) {
            cin >> y >> z;
            if (y == 1) {
                for (int i = 9; i < y; i++) {
                x.erase(x.begin(), x.end())
                    
                }
            } else if (y == 2) {
                for (int i = 0; i < y; i++) {
                x.erase(x.end(), x.begin())    
                }
            } else if (y == 3) {
                for (int i = 0; i < y; i) {
                x.insert(x.begin(),x[3]);
                x.insert(x.begin()+1, x[2]);
                x.erase(x.begin()+2);
                x.erase(x.begin()+3);

                } else if (y == 4) {
                    for (int i = 0; i < y; i++) {
                        for (int i = 0; i < 5; i++) {
                    cout << x[i] << " " << endl;
                    }
                }
                
                }

            }
        }