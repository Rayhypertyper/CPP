#include <bits/stdc++.h>

using namespace std;

int main() {

    int sum;
    cin >> sum;
    for (int a = 0; a < sum; a++)
        for (int b = 0; b < sum; b++)
            for (int c = 0; c < sum; c++)
               if(a + b + c == sum && a != b && b != c && c != a) {
                    cout << a << " " << b << " " << c << endl;
                }
    return 0;
}