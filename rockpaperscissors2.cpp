#include <bits/stdc++.h>


using namespace std;

int main() {
    string userChoice;

    srand((unsigned) time(0));
    int computerNumber = (rand() % 3) + 1;
    string computerChoice;
    string userName;


cin >> userChoice; 


    if (computerNumber == 1) {
        computerChoice = "rock";
    } else if (computerNumber == 2) {
        computerChoice = "scissors";
    } else if (computerNumber == 3) {
        computerChoice = "paper";
    }


    if (userChoice == "rock") {cout << "paper" << endl;}

     if(userChoice == "scissor") {cout << "rock" << endl;}
  
    if(userChoice == "paper") {cout << "scissors" << endl;} {cout << "you lose" << endl;}

  

}