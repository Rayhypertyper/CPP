#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
    int startnum;
    int endnum;
    int x = startnum + endnum;
    cin >> startnum >> endnum;
    if(x % 2 == 0) { cout << "the sum from " << startnum << " to " << endnum << " added together is " << (startnum + endnum) * (startnum + endnum) / 2 + (x / 2) << endl;  }
}