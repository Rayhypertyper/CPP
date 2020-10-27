#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    int y;
    int z;
    int a;
    
    cin >> x >> y >> z;
    a = x + y + z;
    
    if ((a == 180) && ((x == y && x != z) or (y == z && y != x)  or (z == x && z != y))) {
        cout << "Isosceles" << endl
    ;} else
    if  (x == 60 && y == 60 && z == 60) {cout << "Equilateral" << endl
    ;} else
    if ((a == 180 ) && (x != y && y != z  && z != x)) {cout << "Scalene" << endl;}
    else 
    if ( a != 180) { cout << "Error" << endl;}
    return 0;
}