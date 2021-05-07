#include <bits/stdc++.h>


using namespace std;

int main() {

    //int x = 5;
   // cout << int(6.5) << endl;
   // cout << bitset<8>(x) << endl;

  //  string binary_str = bitset<8>(x).to_string();
   // cout << binary_str << endl;
  //  cout << binary_str[2] << endl;
  int x;
  cout << bitset<8>(x)[3] << endl;
  cout << bitset<16>(x)[0]<<endl;

  for(int i = 0; i < 16; i++) {
      cout << bitset<16>(x)[i];
  }
}