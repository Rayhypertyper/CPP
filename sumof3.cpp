#include <bits/stdc++.h>

using namespace std;

int main() {
    int firstdigit, seconddigit, thirddigit, fourthdigit, fifthdigit;
    int sum;

    for (int num = 10000; num <= 99999; num++) {
        firstdigit = num / 10000;
        seconddigit = num / 1000 % 10;
        thirddigit = num / 100 % 10;
        fourthdigit = num / 10 % 10;
        fifthdigit = num % 10;
        sum = firstdigit + seconddigit + thirddigit + fourthdigit + fifthdigit;

        if (sum == 3) {
            cout << num << endl;
        }
    }
}