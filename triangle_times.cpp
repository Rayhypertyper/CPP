#include <bits/stdc++.h>

using namespace std;
int main() {
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    if (x + y + z != 180) {
        cout << "Error" << endl;
    } else if (x + y + z == 180 && x == y && y == z && x == z) {
        cout << "Equilateral" << endl;
    } else if ((x + y + z == 180) && (x == y || x == z || y == z)) {
        cout << "Isosceles" << endl;
    } else if (x != y and y != z and x != z) {
        cout << "Scalene" << endl;
    }
    return 0;

}