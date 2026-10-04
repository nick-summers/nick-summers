/*
CSC 134
M2HW1 - Gold
Nick Summers
4 Oct 26
*/

// This program is used by General Crates, INC. to calculate
// the volume, cost, customer charge, and the profit of a crate
// of any size, It calculates this date from user input, which
// consits of the length, width, and height of the crate.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length, // Length of the crate
           width,  // Width of the crate
           height, // Height of the crate
           volume, // Volume of the crate
           cost,   // Cost to build the crate
           charge, // Amount charged to customer
           profit; // Profit made on the crate

    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;
    // Prompt the user for the crate's length, width, and height.
    cout << "Enter the crate's length in feet: ";
    cin >> length;
    cout << "Enter the crate's width in feet: ";
    cin >> width;
    cout << "Enter the crate's height in feet: ";
    cin >> height;

    // Calculate the crate's volume, cost, charge, and profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data.
    cout << "The crate's volume is: " << volume << " cubic feet" << endl;
    cout << "The cost to build the crate is: $" << cost << endl;
    cout << "The amount charged to the customer is: $" << charge << endl;
    cout << "The profit made on the crate is: $" << profit << endl;
    return 0;
}