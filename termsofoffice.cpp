#include <bits/stdc++.h>

using namespace std;
int main() {
    int start_year, end_year, numberof60s = 1;
    cin >> start_year >> end_year;
    cout << "All positions change in year " << start_year << endl;

    while (start_year + 60 * numberof60s <= end_year) {
        cout << "All positions change in year " << start_year + 60 * numberof60s << endl;
        numberof60s++;

    }
}