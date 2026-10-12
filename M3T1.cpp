// CSC 134
// M3T1
// Nick Summers
// 10/11/26

#include <iostream>
using namespace std;

int main() {

// Declare our variables

    int widthOne, lengthOne;
    int areaOne;
    int widthTwo, lengthTwo;
    int areaTwo;

    // Ask user for dimensions
    cout << "Enter the width of the first rectangle: ";
    cin >> widthOne;

    cout << "Enter the length of the first rectangle: ";
    cin >> lengthOne;

    cout << "Enter the width of the second rectangle: ";
    cin >> widthTwo;

    cout << "Enter the length of the second rectangle: ";
    cin >> lengthTwo;

    // Calculate areas
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // Display areas
    cout << "The area of the first rectangle is: " << areaOne << endl;
    cout << "The area of the second rectangle is: " << areaTwo << endl;

    return 0;
}