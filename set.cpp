#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> myset = {3,1,4,2};
    myset.insert(3);
    myset.insert(5);
    for(int i = 0; i < myset; i++)
    cout<<myset.size()<<endl;
}