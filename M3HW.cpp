// CSC 134
// M3HW1 - Gold
// Nick Summers
// 10/18/26

#include <iostream>
#include <string>
#include <iomanip> // for 2 decimal places trick
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;


int main() {

    // Question 1
    cout << "Question 1" << endl;
    // Question 1 code goes here

    string answer;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type 'yes' or 'no': ";

    cin >> answer;

    if (answer == "yes") {
        cout << "Nice! I'm glad to hear that" << endl;
    } else if (answer == "no") {
        cout << "Oh no! Hopefully we can get along." << endl;
    } else {
        cout << "I didn't understand your answer. Please type 'yes' or 'no'." << endl;
    }

    // Question 2
    cout << "Question 2" << endl;
    // Question 2 code goes here

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


    // Question 3
    cout << "Question 3" << endl;
    // Question 3 code goes here

    int choice1, choice2;

        cout << "Welcome to Choose Your Destiny!" << endl;
        cout << "You awake in a mysterious dungeon." << endl;
        cout << "You walk outside of your room and see two doors. One to the left and one to your right." << endl;

        cout << "Which door do you choose? Type 1 for the left door or 2 for the right door: ";
        cin >> choice1;

        if (choice1 == 1) {
            cout << "You enter the left door and find a deranged man!" << endl;
            cout << "What do you do?" << endl;
            cout << "1. Fight the man" << endl;
            cout << "2. Run away" << endl;
            cout << "Type 1 or 2: ";
            cin >> choice2;

        } else if (choice1 == 2) {
            cout << "You enter the right door and find a skeleton!" << endl;
            cout << "The skeleton readies his bow and shoots, ending you instantly." << endl;
        } else {
            cout << "Invalid choice. Please type 1 or 2." << endl;
        }

        if (choice2 == 1 ) {
            cout << "You fight the man and win! You find a key on his body." << endl;
            cout << "You use the key to unlock a door and escape the dungeon!" << endl;
        } else if (choice2 == 2) {
            cout << "You run away, but the man catches you and ends your life." << endl;
        } else {
            cout << "Invalid choice. Please type 1 or 2." << endl;
        }
        

        // Question 4
    cout << "Question 4" << endl;
    // Question 4 code goes here

    srand(time(0)); // seed the random number generator

    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int user_answer;

    cout << "What is " << num1 << " + " << num2 << "? ";
    cin >> user_answer;

    if (user_answer == num1 + num2) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is " << num1 + num2 << "." << endl;
    }

    return 0;
}