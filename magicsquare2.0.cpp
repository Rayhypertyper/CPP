#include <bits/stdc++.h>

using namespace std;

int main() {

 int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m>>n>>o>>p;
    int r1 = a+b+c+d;
    int r2 = e+f+g+h;
    int r3 = i+j+k+l;
    int r4 = m+n+o+p;
    int c1 = a+e+i+m;
    int c2 = b+f+j+n;
    int c3 = c+g+k+o;
    int c4 = d+h+l+p;
    if (r1==r2 && r1==r3 && r1==r4 && r1== c1 && r1==c2 && r1==c3 && r1==c4)
        cout <<"magic"<<endl;
    else 
        cout <<"not magic"<<endl;
}
    