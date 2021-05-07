#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
    int num;
    cin >> num;
    int a = (num % 10);
    int b =(num /10) % 10;
    int c = ((((num - a) / 10) - (b)) / 10 % 10);
    int d =  ((((num - a) / 10 - (b)) / 10) - c )/10 % 10;
    int e =(((((num - a) / 10 - (b)) / 10) - c )/10 - d ) /10 % 10;

     if ( num >= 10000 and num <= 99999)
     
      { cout << "the first digit is " << e << ", the second digit is " << d << ", the third digit is " << c << ", the  fourth digit is " << b  <<", the fifth digit is " << a << endl; }
      else
      {
        {cout << "please submit a 5 digit number or else you will get this alert" << endl;}
      }
      
    return 0;
}