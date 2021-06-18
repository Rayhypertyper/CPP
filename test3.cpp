#include <bits/stdc++.h>

using namespace std;

int main() {
    string str = "hello world";
    auto found_idx = str.find("wo");
    if ( found_idx != string::npos)
        cout << "Found at: " << found_idx << endl;
    else
        cout << "not found" << endl;

}