#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x = 0, y = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A')
            x++;
        else if(str[i] == 'B')
            y++;
    }
    if (x > y)
        cout << "A" << endl;
    else if (x == y)
        cout << "Tie" << endl;
    else if (x < y)
        cout << "B" << endl;
} 