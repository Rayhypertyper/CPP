#include <bits/stdc++.h>

using namespace std;

int main() {
    int first_digit,second_digit,third_digit,fourth_digit;
    cin >> first_digit >>second_digit >> third_digit >> fourth_digit; 
    
    if ((first_digit == 8 || first_digit == 9) &&
        (fourth_digit == 8 || fourth_digit == 9) &&
        (second_digit == third_digit)) {
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }
}
