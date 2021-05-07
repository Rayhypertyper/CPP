#include <bits/stdc++.h>

#include <ctime>

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


    if (computerNumber == 1) {
        cout << computerChoice << endl;
    } else if (computerNumber == 2) {
        cout << computerChoice << endl;
    } else if (computerNumber == 3) {
        cout << computerChoice << endl;
    }

    

  if (computerNumber == 1 && userChoice == "scissors") {
        cout << "you lose" << endl;
    } else if (computerNumber == 1 && userChoice == "paper") {
        cout << "you win" << endl;
    } else if (computerNumber == 2 && userChoice == "rock") {
        cout << "you win" << endl;
    } else if (computerNumber == 2 && userChoice == "paper") {
        cout << "you lose" << endl;
    } else if (computerNumber == 3 && userChoice == "rock") {
        cout << "you lose" << endl;
    } else if (computerNumber == 3 && userChoice == "scissors") {
        cout << "you win" << endl;
    } else if (computerNumber ==  userChoice ) {
        cout << "tie" << endl;
    }
}