#include <bits/stdc++.h>

using namespace std;

int main() {


float height;
float weight;
float bmi;



cin >> weight >> height;


bmi = weight / ( height * height);

if (  18 <= bmi && bmi <= 25) {cout <<"Normal weight" << endl;}
else
if (bmi < 18.5) {cout << "Underweight" << endl;}
else
if ( bmi > 25) {cout <<"Overweight" << endl;}

return 0;
}