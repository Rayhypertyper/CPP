#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    int l;
    char r1;
    char r2;
    char r3;
    char r4;
    char r5;
    char r6;
    char result;
    cin >> r1 >> r2  >> r3  >> r4 >> r5 >> r6;
    
    w = 0;
    l = 0;

    if ( r1 == 'W') { 
        w = w+1;
    } else {
        l = l +1;
    } 
    
if ( r2 == 'W') { 
        w = w+1;
    } else {
        l = l +1;
    } 

if ( r3 == 'W') { 
        w = w+1;
    } else {
        l = l +1;
    } 

if ( r4 == 'W') { 
        w = w+1;
    } else {
        l = l +1;
    } 

if ( r5 == 'W') { 
        w = w+1;
    } else {
        l = l +1;
    } 

if ( r6 == 'W') { 
        w = w+1;
    } else {
        l = l +1;
    } 


    if (w == 0 ) {cout << "-1" << endl;}
    else
    if( w >= 5) {cout << "1" <<endl; }
    else
    if ( w >= 3 && w <= 4) { cout << "2" <<endl;}
    else
    if(w >= 1 && w <=2) { cout << "3" << endl;}
    else
    return 0;
}

