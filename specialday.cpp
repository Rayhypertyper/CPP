#include <bits/stdc++.h>

using namespace std;

int main() {
    int month;
    int day;
    cin >> month >> day;
    if (month == 2 and day == 18) {
        cout << "Special" << endl;
    } else
    if (month > 2) {
        cout << "After" << endl;
    } else
    if (month == 2 and day > 18 ) {
        cout << "After" << endl;
    } else
    if (month == 2 and day < 18 ) {
        cout << "Before" << endl;
    } else if (month < 2) {
        cout << "Before" << endl;
    }

    return 0;

    
}