/*
CSC 134
M2HW1 - Gold
Nick Summers
4 Oct 26
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string name;
    double startingBalance;
    double deposit;
    double withdrawal;
    double endBalance;

    // Ask user for their information
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your starting balance: $";
    cin >> startingBalance;

    cout << "Enter your deposit amount: $";
    cin >> deposit;

    cout << "Enter your withdrawal amount: $";
    cin >> withdrawal;

    // Calculate the ending balance
    endBalance = startingBalance + deposit - withdrawal;

    // Display account summary
    cout << fixed << setprecision(2);
    cout << "\nAccount Summary for " << name << ":\n";
    cout << "-----------------------------\n";
    cout << "Account number: 123456789\n";
    cout << "Starting Balance: $" << startingBalance << endl;
    cout << "Deposit Amount: $" << deposit << endl;
    cout << "Withdrawal Amount: $" << withdrawal << endl;
    cout << "Ending Balance: $" << endBalance << endl;

    return 0;
}