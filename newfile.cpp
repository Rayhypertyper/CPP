#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
int num,sum,digit;
cin >> num;
while (num > 0){
    digit = num % 10;
    cout << digit << " ";
    num = num / 10;
    sum = sum + digit;
}
    

cout << sum << endl;
}