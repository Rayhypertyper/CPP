#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
    string response;
    do { cout << "Enter menu choice" << endl;
    cout << "more" << endl << "quit" << endl;
    cout << "your input is" << response<< endl;
    cin >> response;
    cout << "you input : " << response << endl;
    } while (response != "quit");
}