#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    char icon[3][3] = {
        {'*', 'x', '*'},
        {' ', 'x', 'x'},
        {'*', ' ', '*'}
    };
    cin >> x;
    for (int i = 0; i < 3; i++) {
        for(int row = 0; row < x; row++){
            for (int column = 0; column < x; column++) {
                for(int j = 0; j < 3; j++) {
                    cout << icon[row][column];
                }
            }
        }
    }
}
    

    

