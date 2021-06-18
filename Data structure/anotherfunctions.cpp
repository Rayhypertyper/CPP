#include <bits/stdc++.h>

using namespace std;

int perimeter(int lenght, int width) {
    int totallenght = lenght + lenght + width + width;
    cout << "if lenght is " << lenght << " and width is " << width << " then perimeter is " << (lenght + lenght + width + width) << endl;
    return totallenght;
}

int main() {
    int x;
    x = perimeter(5, 6);

    cout << x << endl;
}