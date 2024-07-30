#include <bits/stdc++.h>

using namespace std;

int main() {
    set <int> x = {};
    set <int> y = {};
    int input;
    int v = 2;
    cin >> a;
    if (a > 0 && a < 10) {
        cout << a + 1 << endl;
    } else if (a > 9 && a < 100) {
        a++;
        x.insert(a % 10);
        x.insert(a / 10);
        if (x.size() == 2) {
            cout << a << endl;
        } else if (x.size() == 1) {
            while (x.size() == 1) {
                a++;
                cout << a << endl;
                break;
            }
        }
    } else if (a > 99 and a < 1000) {
        a++;
        x.insert(a % 10);
        x.insert(a / 10 % 10);
        x.insert(a / 100);
        if(x.size() == 3){
            cout << "yes" << endl;
        if (x.size() == 2) {
            cout << "no" << endl;
        
           /*  do{
                a++;
            }
            while(x.size() !=3);
            cout << a << endl; */
        }
    
        }
        
                
    }
}


                
            
            
        
    



/* else if(a > 999 and a < 10000){
        for(int i = 0; i < 2;i++){
            a++;
            x.insert(a%10);
            x.insert(a/10%10);
            x.insert(a/100%10);
            x.insert(a/1000%10);
            if(x.size() == 4){
                cout << a << endl;
                break;
            }
        }
    }  
}
         */