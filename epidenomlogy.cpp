#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, n, r;
    cin >> p >> n >> r;
    int infected = n;
    int total = infected;
    int day = 0;

    while (total <= p) {

        infected *= r;
        total += infected;
        day++;
    }
    cout << day << endl;
}