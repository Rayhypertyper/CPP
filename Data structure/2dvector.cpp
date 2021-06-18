#include <bits/stdc++.h>

using namespace std;

int main() {

    vector <vector <int>> x =  {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };
    vector<int> y = {10,11,12,13};

    x.push_back(y);
   

    for ( int i = 0; i < x.size(); i++){
        for (int j = 0; j < x[i].size(); j++){
            cout << x[i][j] << " ";  
            }
        cout << endl;
yes
        
        
    } 
    return 0;
}
