#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b;
    int counter = 1;
    for (int i=0; i<a; i++){
        cin >> b;
        if (i > float(sqrt(b))){
            break;
            }
        for (int j = 2; j<a+2; j++){
            int c = b/j;
            if (b%j == 0){
            counter+=j;
            counter+=c;
            }
        }
    }
    
}