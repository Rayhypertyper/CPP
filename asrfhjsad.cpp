 #include <bits/stdc++.h>

 using namespace std;
 int L, N;
 char x;
 int main() {

     cin >> L;
     while (L--) {
         cin >> N >> x;
         string s = "";
         for (int i = 0; i < N; i++) {
             s += x;
         }
         cout << s << endl;
     }

 }