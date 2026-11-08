// CSC 134
// M5T1
// Nick Summers
// 11/8/26

#include <iostream>
#include <string>
using namespace std;

// declare our functions

string formatAnswer (int answer);
void printAnswer (string msg);

int main () {
    int answer = 5;
    string message;
    message = formatAnswer(answer);
    printAnswer(message);
    return 0;
    }

    // define functions

    string formatAnswer (int answer) {
        // make a string to hold the answer
        string answerMessage;
        answerMessage = "The answer is ";
        answerMessage += to_string (answer);

        return answerMessage;
    }

    void printAnswer (string msg) {
        // display our message
        cout << msg << endl;
    }