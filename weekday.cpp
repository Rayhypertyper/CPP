#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
    int day;
    int weekday;
    cin >> day;
    if (weekday = 1 or 1 + 7 * day) {cout << "today is Monday" << endl;}
    else
    if ( weekday = 2 or 2 + 7 * day) { cout << "today is Tuesday" << endl;}
    else
    if ( weekday = 3 or 3 + 7 * day) { cout << "today is Wednesday" << endl;}
    else
    if ( weekday = 4 or 4 + 7 * day) { cout << "today is Thursday" << endl;}
    else
    if ( weekday = 5 or 5 + 7 * day) { cout << "today is Friday" << endl;}
    else
    if ( weekday = 6 or 6 + 7 * day) { cout << "today is Saturday" << endl;}
    else
    if ( weekday = 7 or 7 + 7 * day) { cout << "today is Sunday" << endl;}
     else if (day > 1000)
     { cout << "please enter a day under 1000" << endl;}
}
