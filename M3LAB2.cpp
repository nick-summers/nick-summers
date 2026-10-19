#include <iostream>
using namespace std;

int main() {

    // Ask the user to enter their grade
    cout << "Enter your numerical grade" << endl;
    int grade;
    cin >> grade;

    //Determine the letter grade based on the numerical grade
    if (grade >= 90) {
        cout << "Your letter grade is A" << endl;
    } else if (grade >= 80) {
        cout << "Your letter grade is B" << endl;
    } else if (grade >= 70) {
        cout << "Your letter grade is C" << endl;
    } else if (grade >= 60) {
        cout << "Your letter grade is D" << endl;
    } else {
        cout << "Your letter grade is F" << endl;
    }

    return 0;
}
