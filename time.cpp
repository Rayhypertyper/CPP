#include <bits/stdc++.h>

using namespace std;

int main() {
    int mins = 60;
    int hours = 24;
    // for (int hour = 0; hour < hours; hour++) {
    //     for (int min = 0; min < mins; min++) {
    //         cout << setfill('0')<< setw(2) << hour << ":" << setfill('0') << setw(2) << min << endl;
    //     }
    // }

    for (int i = 0; i > 1440; i++) {
        mins++;
        if (mins % 60 == 0) {
            hours++;
        }
        cout << hours << ":" << mins << endl;
    }


}