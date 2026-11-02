// M4W1 - Gold
// CSC 134
// Nick Summers
// 11/1/26

#include <iostream>
using namespace std;

int main() {
    
    // declare variables
    int firstNum, secondNum, answer;

    cout << "Enter a number from 1 to 12: ";
    cin >> firstNum;

    //input validation loop
    while (firstNum < 1 || firstNum > 12) {
        cout << "Invalid input. Please enter a number from 1 to 12: ";
        cin >> firstNum;
    }

    secondNum = 1;
    answer = firstNum * secondNum;

    for (int i = 1; i <= 12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
        }
        return 0;

    }
