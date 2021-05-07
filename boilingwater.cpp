#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, x, p;
    cin >> b;

    if (b >= 80 and b <= 200) {
        p = 5 * b - 400;
        cout << p << endl;
    }



    if (b > 100) {
        cout << "-1" << endl;
    } else


    if (b < 100) {
        cout << "1" << endl;
    } else


    if (b == 100) {
        cout << "0" << endl;
    }
}