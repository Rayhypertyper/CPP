#include <bits/stdc++.h>

using namespace std;

int main() {

    int input_number, a = 0, y = 0;
    cin >>input_number;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A')
            a++;
        else if(str[i] == 'B')
            y++;
    }
    if (a > y)
        cout << "A" << endl;
    else if (a == y)
        cout << "Tie" << endl;
    else if (a < y)
        cout << "B" << endl;
} 