#include <bits/stdc++.h>

using namespace std;
int main() {
  
    bitset<8>bits("00000000");
   // bitset<8> bits(0);
    //yes
    bits.set(1,2); // 0000 0000 -> 0000 0001
    //bits.set(7,1);  // 0000 0000 -> 1000 0001
    //bits.reset(7); // 1000 0000 -> 0000 0001
    cout << bits << endl;
} 