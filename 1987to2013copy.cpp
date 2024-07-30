#include <bits/stdc++.h>

using namespace std;
void special(){
    
}

int main() {
    set <int> x = {};
    int year;
    cin >> year;
    
    while(year < 10000){
        while(year)
        if(year == 10){
            cout << 12 << endl;
        } else if(year == 99){
            cout << 102 << endl;
        } else if(year == 999){
            cout << 1023 << endl;
        } else if(year == 9999){
            cout << 10234 << endl;
        }
        x.clear();
        year++;
        if(year > 0 and year < 10){
            cout << year + 1 << endl;
        } else if(year > 9 and year < 100){
            x.insert(year%10);
            x.insert(year/10);
            if(x.size() == 2){
                cout << year << endl;
            }
        } else if(year > 99 and year < 1000){
            x.insert(year%10);
            x.insert(year/10%10);
            x.insert(year/100);
            if(x.size() == 3){
                cout << year << endl; 
                break;
            }
        } else if(year > 999 and year < 10000){
            x.insert(year%10);
            x.insert(year/10%10);
            x.insert(year/100%10);
            x.insert(year/1000);
            if(x.size() == 4){
                cout << year << endl;
                break;
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