#include <bits/stdc++.h>

using namespace std;
int main() {
    int maxspeed;
    int yourspeed;
    cin >> maxspeed >> yourspeed;
    if (yourspeed <= maxspeed) {
        cout << "Congratulations, you are within the speed limit!" << endl;
    } else if (yourspeed <= maxspeed + 20) {
        cout << "You are speeding and your fine is $100." << endl;
    } else if (yourspeed >= maxspeed + 21 and yourspeed <= maxspeed + 30) {
        cout << "You are speeding and your fine is $270." << endl;
    } else if (yourspeed >= maxspeed + 31) {
        cout << "You are speeding and your fine is $500." << endl;
    }
}