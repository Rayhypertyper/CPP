#include <bits/stdc++.h>

using namespace std;

int main() {
    int antenna;
    int eyes;
    cin >> antenna >> eyes;
  
  if ( antenna <= 6) {
    {if (antenna <= 2 && eyes < 2 ) {cout << "GraemeMercurian" << endl;}
    else if (antenna <= 2 && (2 <= eyes && eyes <= 3) ) { cout << "VladSaturnian" << endl; cout << "GraemeMercurian" << endl;}
    else if (antenna <= 2 && eyes > 3) { cout << "VladSaturnian" << endl;}
    }
    if ( antenna >= 3) { if (2 <= eyes && eyes <= 4) { cout << "VladSaturnian" << endl; cout << "TroyMartian" << endl;}
                          else if ( eyes > 4) {cout << "VladSaturnian" << endl;}
                          else if ( eyes == 1)
                          {
                            cout << "TroyMartian" << endl;
                          }
                                 
    }
  }

  
       else return 0;
}


