// If statements - ex 2
// CSC 134
// Nick Summers
// 10/11/26

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable(s) we need
  int choice; 

  // ask the question
  cout << "Do you choose to fight Person 1 or Person 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You destroyed your opponent!" << endl;
  }
  else if (2 == choice) {
  	cout << "Your opponent destroyed you!" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method