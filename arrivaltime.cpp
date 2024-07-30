#include <bits/stdc++.h>

using namespace std;

int main() {
    int mins = 60;
    float hours = 24;
    char y;
    cin >> hours >> y >> mins;
    if (mins % 60 == 0 ) {
            hours++;
    }

    if (hours > 7 and hours < 10 and mins == 0 or mins == 20 or mins == 40 and y == ':' and mins == (3/5)*mins){
        
        //cout << setfill('0')<< setw(2) << (((10 - hours)/2)*3) + 7 << ":" << setfill('0')<< setw(2) << mins << endl;
        cout << mins << endl;
    }
    else if(hours > 15 and hours < 19 and mins == 0 or mins == 20 or mins == 40 and y == ':' ){
        mins == 3/5*mins;
        cout << setfill('0')<< setw(2) << (((19 - hours)/2)*3) + 15 << ":" << setfill('0')<< setw(2) << mins << endl;
    }
    else if(mins == 0 or mins == 20 or mins == 40 and hours > 24 and mins > 60 and hours > 19 and hours < 15 and hours > 10 and hours < 7 and y == ':'  ){
        mins == 3/5*mins;
        cout << setfill('0')<< setw(2) << hours + 1 << ":" << setfill('0') << setw(2) << mins << endl;


    }
    
}