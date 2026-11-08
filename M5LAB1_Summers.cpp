// CSC 134
// M5LAB1
// Nick Summers
// 11/8/26

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_front_gate();
void choice_side_entrance();
void choice_control_room();
void choice_escape();
void choice_secret_bunker();


int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "\nYou are at an abandoned military base." << endl;
    cout << "1. Enter the front gate" << endl;
    cout << "2. Find another entrance" << endl;
    cout << "3. Go home" << endl;
    cout << "4. Quit" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_front_gate();
    }
    else if (choice == 2) {
        choice_side_entrance();
    }
    else if (choice == 3) {
        choice_escape();
    }
    else if (choice == 4) {
        cout << "Quitting game." << endl;
        return;
    }
    else {
        cout << "Invalid choice. Try again." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        main_menu();
    }
}

// define functions

void choice_front_gate() {
    cout << "\nYou enter the base." << endl;
    cout << "1. Enter the control room" << endl;
    cout << "2. Explore the bunker" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_control_room();
    }
    else if (choice == 2) {
        choice_secret_bunker();
    }
    else {
        cout << "You return to the entrance." << endl;
        main_menu();
    }
}

void choice_side_entrance() {
    cout << "\nYou find a broken window." << endl;
    cout << "1. Enter the control room" << endl;
    cout << "2. Explore the bunker" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_control_room();
    }
    else if (choice == 2) {
        choice_secret_bunker();
    }
    else {
        choice_escape();
    }
}

void choice_control_room() {
    cout << "\nYou find a computer with classified files." << endl;
    cout << "1. Read the files" << endl;
    cout << "2. Run away" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "You discover a secret military experiment!" << endl;
        cout << "ENDING: THE TRUTH REVEALED" << endl;
    }
    else if (choice == 2) {
        choice_escape();
    }
}

void choice_secret_bunker() {
    cout << "\nYou discover a locked metal door." << endl;
    cout << "1. Open the door" << endl;
    cout << "2. Leave" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "You discover a secret laboratory!" << endl;
        cout << "ENDING: SECRET EXPERIMENT" << endl;
    }
    else if (choice == 2) {
        choice_escape();
    }
}

void choice_escape() {
    cout << "\nYou leave the military base safely." << endl;
    cout << "ENDING: NARROW ESCAPE" << endl;
}