#include <bits/stdc++.h>

using namespace std;

int main() {
    int b;
    int a;
    cin >> b;
    if (b < 10000) {
        a = sqrt(b);

        cout << "The largest square has side length " << a << "." << endl;
    }

    return 0;
}