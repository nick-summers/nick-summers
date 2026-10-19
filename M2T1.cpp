/* 
CSC 134
M2T2 - Receipt Calculator
Nicholas Summers
9/27/26
*/

#include <iostream>
#include <iomanip> // for 2 decimal places trick
using namespace std;

int main () {
    // Purpose - Create a simple receipt
    // should also handle sales tax (8%) and a dine-in tip (15%)

    // Declare our variables
    string item = "🍜 Ramen";
    double item_price = 7.49;
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;         // tax in $
    double tip_percent = 0.15; // 15% is 15/100
    double tip_amount;         // tip in $
    double total;              // price + tax + tip

    // Greet user and take the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    cout << "Please enter 1 if the order is dine in or 2 if the order is takeout: ";
    int order_type;
    cin >> order_type;

    // Calculate the meal price
    // Calculate the sales tax and the total price

    tax_amount = item_price * tax_percent;

    // Calculate the tip if the order is dine in
    
    if (order_type == 1) {
        tip_amount = item_price * tip_percent;
    } else {
        tip_amount = 0.0; // no tip for takeout
    }

    // Calculate the total price
    total = item_price + tax_amount + tip_amount;
    
    // Print the receipt.
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t $" << item_price << endl;
    cout << "Tax" << "\t\t $" << tax_amount << endl;
    if (order_type == 1) {
        cout << "Tip" << "\t\t $" << tip_amount << endl;
    }
    cout << "------------------------------" << endl;
    cout << "Total" << "\t\t $" << total << endl;
    cout << endl;

    return 0; // no errors
    }