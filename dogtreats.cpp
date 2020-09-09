#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
    int x;
    int s;
    int l;
    cin >> x >> s >> l;
    if (1 * x + 2 * s + 3 * l >= 10) {
        cout << "happy" << endl;
    } else {
        cout << "sad" << endl;
    }

    return 0;
}

