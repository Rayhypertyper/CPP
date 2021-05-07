#include <bits/stdc++.h>

using namespace std;
int main() {
    int a, b, c, d, e;
    cout << "Hi welcome to pattern finder. This only works for patterns that have a increasing pattern. Please enter in five values and this program will help you determine the 6th and 7th values" << endl;
    cin >> a >> b >> c >> d >> e;
    if (b - a == c - b and c - b == d - c and d - c == e - d) {
        cout << (b - a) + e << endl;
        cout << (2 * b - 2 * a) + e << endl;
    } else cout << "please read the instructions again and re-enter a set of numbers" << endl;


}