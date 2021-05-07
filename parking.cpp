#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,answer = 0;
    string yesterday,today;
    cin >> n >> yesterday >> today;


    for(int i = 0; i < n; i++) {
        if (today[i] == 'C' && yesterday[i] == 'C') {
            answer++;
        }
    }

    cout << answer << endl;
}
    