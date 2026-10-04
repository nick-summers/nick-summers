/*
CSC 134
M2HW1 - Gold
Nick Summers
4 Oct 26
*/

#include <iostream>
using namespace std;

int main () {
    int pizzas, slicesPerPizza, visitors;
    int totalSlices, slicesPerVisitor, leftoverSlices;

    // Ask the user for the number of pizzas, slices per pizza, and number of visitors.

    cout << "How many pizzas are being ordered? ";
    cin >> pizzas;
    cout << "How many slices are in each pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors are attending the party? ";
    cin >> visitors;

    // Calculate the total number of slices, slices per visitor, and leftover slices.

    totalSlices = pizzas * slicesPerPizza;
    slicesPerVisitor = totalSlices / visitors;
    leftoverSlices = totalSlices % visitors;

    // Display the results to the user.

    cout << "Total slices: " << totalSlices << endl;
    cout << "Slices per visitor: " << slicesPerVisitor << endl;
    cout << "Leftover slices: " << leftoverSlices << endl;

    return 0;
}

