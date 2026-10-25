// CSC 134
// M4T1
// Nick Summers
// 10/25/26

#include <iostream>
using namespace std;

int main() {
    
    
    int number = 5;
    
    int i=0;
    while (i < number) {
        cout << "Hello" << endl;
     // i = i + 1;
     i++; // shorter version of the above line
    }
    cout << "That's all!" << endl;

    // program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;
    // print a table header
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        // notice we start at 1,
        // and stop at 10 because of <=
        // (< would stop at 9)
        cout << num << "\t" << num * num << endl;
        // as we see, if we don't increase num,
        // it will run forever
        num++;
    }
    return 0;
}