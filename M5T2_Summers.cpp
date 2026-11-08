// CSC 134
// M5T2
// Nick Summers & AI Nav GPT
// 11/8/26

#include <iostream>
using namespace std;

// define functions
int square(int num);
void printAnswerLine(int number, int squared);

int main()
{
    // Print the numbers 1 to 10 and their squares.
     for (int i = 1; i <= 10; i++)
    {
        int squared = square(i);
        printAnswerLine(i, squared);
    }

    return 0;
}

// define functions
int square(int num)
{
    return num * num;
}

void printAnswerLine(int number, int squared)
{
    cout << number << " squared is " << squared << endl;
}