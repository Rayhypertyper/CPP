#include <bits/stdc++.h>

using namespace std;

int main() {
    int v = 0, h = 0;
    int x[2][2] = {
        {1,2},
        {3,4}
    };
    string input;
    
    cin >> input;
    for (int i = 0; i < int(input.size()); i++) {
        if (input[i] == 'v  ') {
            v == v + 1;
        } else if (input[i] == 'h') {
            h == h + 1;
        }
    }
    if (v % 2) {
        swap(x[0][0], x[0][1]);
        swap(x[1][0], x[1][1]);

    }
    if (h % 2) {
        swap(x[0][0], x[1][0]);
        swap(x[0][1], x[1][1]); 
    }
    cout << x[0][0] << " " << x[0][1] << endl;
    cout << x[1][0] << " " << x[1][1] << endl;


}