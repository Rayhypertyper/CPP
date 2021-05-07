#include <bits/stdc++.h>

using namespace std;
int main() {
  string txt;
  cin >> txt;
  if (txt.size()%2==0)
  cout << "Even" << endl;
  else if (txt.size()%2!=0)cout << "Odd" << endl;
  return 0;
}
