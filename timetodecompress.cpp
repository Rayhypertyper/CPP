#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main() {
   
    
    char inputSymbol;
    int inputNumber;
    string input;
    getline (cin,input);
    stringstream(input)>> inputNumber >> inputSymbol;
    
      //cout << inputNumber << " " << inputSymbol << endl;
       
    //for(int i = 1; i < inputNumber; i++)
    { cout << std::string(inputNumber,inputSymbol);}
    
}
