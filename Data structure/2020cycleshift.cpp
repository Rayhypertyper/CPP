#include <bits/stdc++.h>

using namespace std;

int main() {
    string t, s;
    cin >> t >> s;
    for (int i = 0; i < s.size(); i++) {
        if(t.find(s) != string::npos) {
            cout << "Yes" << endl;
            return 0;
        } else { 
            s.push_back(s[0]);
            s.erase(s.begin());
        }
    }
    cout << "no" << endl;
}