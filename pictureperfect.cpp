#include <bits/stdc++.h>

using namespace std;
int main() {
    
    int n;
    int sum;
    int counter = 0;
    int width;
    int height;
    int perimeter;
    int j;

   
    int x = 0;

    while (cin >> n) {
        cin >> x;
        if (x == 0) {
            break;
        }

        for (int i = 1; i <= n; i++) {
            for(int x = i; x < n/2; x++)
                if(i * x == n) {
                    width = i;
                    height = j;
                    perimeter = 2*(width + height);
                }
        }
    }
                    
                
           ;
    cout << "Minimum perimeter is " << perimeter << " with dimension " << width << " x " << height << endl;
}