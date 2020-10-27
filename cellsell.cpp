#include <bits/stdc++.h>

using namespace std;

int main() {
    float day;
    float eve;
    float week;
    float a;
    float b;
cin >> day >> eve >> week;

    if ( day >= 100 && day <= 250) {
    a = (day - 100)*0.25 + eve * 0.15 + week * 0.2; 
    b = eve * 0.35 + week * 0.25;
    }
    
    else if ( day < 100) { a = eve * 0.15 + week * 0.2; 
                           b = eve * 0.35 + week * 0.25;
                           }
    
    else if ( day > 250) {a = (day - 100)*0.25 + eve * 0.15 + week * 0.2;
                          b = (day - 250)*0.45 + eve * 0.35 + week * 0.25;
                        }

    cout << "Plan A costs " << a << endl;
    cout << "Plan B costs " << b << endl;


    if (a > b ) {cout << "Plan B is cheapest." << endl;}
    else if (b > a) {cout << "Plan A is cheapest." << endl;}
    else if (a == b) { cout << "Plan A and B are the same price." << endl;}
    return 0;


    }

