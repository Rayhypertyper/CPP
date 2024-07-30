#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int>x = {};
    int a;
    cin >> a;
    if (a > 99 and a < 1000) {
        a++;
        x.insert(a % 10);
        x.insert(a / 10 % 10);
        x.insert(a / 100);
        if(x.size() == 3){
            cout << "yes" << endl;
        if (x.size() != 3) {
            cout << "no" << endl;
        }
        }
    }
}