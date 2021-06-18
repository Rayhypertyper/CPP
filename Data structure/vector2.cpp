#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> x = {0, 1, 2, 3, 4};
//cout << x[0] << endl;

//for (int i = 0; i <x.size(); i++) {
//    cout << x[i] << endl;
//}
//for(auto item: x){
//    cout << item << endl;
//}
//cout << x.begin() << endl;
//}
//cin 

x.erase(x.begin()+1, x.begin()+3);
cout << x << endl;
}