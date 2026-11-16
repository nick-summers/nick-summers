
#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    double length, width, area;

    // Get length and width
    length = getLength();
    width = getWidth();

    // Calculate area
    area = getArea(length, width);

    // Display results
    displayData(length, width, area);

    return 0;
}

// Get rectangle length
double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// Get rectangle width
double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// Calculate rectangle area
double getArea(double length, double width)
{
    return length * width;
}

// Display rectangle information
void displayData(double length, double width, double area)
{
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}