#include <bits/stdc++.h>

using namespace std;

int main() { 
    int row = 0;
    int colum;
    int array[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++) {
            cin >> array[i][j];
        }
    }

    // cout << array[0][0] << " " << array[0][1] << " "  << array[0][2] << " "  << array[0][3] << endl;
    for (int i = 0; i < 4; i++) {
        row+=array[0][i];
    }
    cout << row << endl;
    for (int j = 0; j < 4; j++) {
        row+=array[1][j];
    }


    return 0;
} 
