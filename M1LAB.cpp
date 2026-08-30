// CSC 134
// M1LAB
// Nick Summers
// 8/30/26

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard.
    // The owner's name
    string name = "Nick Summers";
    // number of apples owned
    int apples = 100;
    //price per apple
    double pricePerApple = 0.25;

    //calculate the total price of the apples
    //TODO

    // print all the information about the orchard

    cout << "Welcome to " << name;
    cout << "' apple orchard." << endl;

    cout << "We have " << apples << " apples for sale" << endl;

    cout << "Price is $" << pricePerApple << " each." << endl;

    // now calculate total price
    double totalPrice = (double) apples * pricePerApple;
    cout << "Total price is: $" <<totalPrice << endl;

}