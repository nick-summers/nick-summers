// CSC 134
// M3T2
// Nick Summers
// 10/11/26

#include <iostream>
// for psuedo random number generation
#include <cmath>
// for making it truly random
#include <ctime>
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    cout << "Your seed is: " << seed << endl;
    // cout << "What's your lucky number? ";
    // cin >> seed;
    // Seed the RNG
    srand(seed);

    const int MAX = 6; // numbers from 1-6
    int roll1, roll2, total;
    roll1 = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    roll2 = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder

    cout << "You rolled a " << roll1 << endl;
    cout << "and: " << roll2 << endl;

    total = roll1 + roll2;

    cout << "Your total roll is: " << total << endl;

    // Let's play craps!
    // 7 and 11 - win
    // 2 and 12 - lose
    // anything else ... comes later
    if (total ==7) {
        cout << "Lucky seven! You win!" << endl;
    } 
    else if (total == 11) {
        cout << "You rolled an eleven! You win!" << endl;

    } 
    else if (total == 2) {
        cout << "Snake eyes! You lose!" << endl;
    }  
    else if (total == 3) {
        cout << "You rolled a three! You lose!" << endl;

    } 
    else if (total == 12) {
        cout << "Boxcars! You lose!" << endl;

    } 
    else { cout << "Let's roll again!" << endl;
        
    }

    return 0;
}