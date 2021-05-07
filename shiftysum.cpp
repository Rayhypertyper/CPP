#include <bits/stdc++.h> 

using namespace std;
 
int main()

{
    int x[3];
    cin >> x[0] >> x[1];
    x[2] = x[0];
    for (int i; i < x[1]; i++) {
        x[0] *= 10;
        x[2] += x[0];
    }
    cout << x[2] << endl;
}