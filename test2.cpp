#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> x = { 5, 4, 3, 2, 1};
    int y;
    
    sort(x.begin(), x.begin() + 4); 
    for(int i = 0; i < 5 ; i++){
        cout << x[i] << endl;
    }
    return 0;
}