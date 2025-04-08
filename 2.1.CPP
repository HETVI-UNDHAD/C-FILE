A local construction company frequently deals with rectangular plots and structures of varying ( )dimensions. To streamline their planning and estimation processes
, the company requires a simple system to manage and analyze rectangular shapes efficiently. The system must be able to handle multiple rectangles, each with 
distinct dimensions. For each rectangle, the length and width need to be defined and stored securely. Additionally, the company needs the ability to calculate
two key metrics for any given rectangle: The area, to estimate usable space or material coverage. The perimeter, to estimate boundary lengths or material 
requirements for edges. To make this system functional, there should be a way to define or update the dimensions of any rectangle as required.
The system should be capable of creating and ( )managing multiple rectangle records, performing calculations for each, and displaying the results
clearly for analysis and planning purposes.


#include<iostream>
using namespace std;

class rectangle {
    float length;
    float width;
    float area;
    float perimeter;

public:
    void GetDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
    }

    void GetArea() {
        area = length * width;
    }

    void GetPerimeter() {
        perimeter = 2 * (length + width);
    }

    void Display() {
        if (length == 0 || width == 0) {
            cout << "No rectangle data available. Please add a rectangle first.\n";
        } else {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area: " << area << endl;
            cout << "Perimeter: " << perimeter << endl;
        }
    }

    void UpdateDimensions() {
        cout << "Enter new length: ";
        cin >> length;
        cout << "Enter new width: ";
        cin >> width;
    }
};

int main() {
    const int maxRectangles = 10;
    rectangle rectangles[maxRectangles];
    int choice = 0;
    int currentRectangle = 0;

    while (choice != 4) {
        cout << "\n--- Rectangle Management System ---\n";
        cout << "1. Add a new rectangle\n";
        cout << "2. Update rectangle dimensions\n";
        cout << "3. Display all rectangles\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (currentRectangle < maxRectangles) {
                rectangles[currentRectangle].GetDimensions();
                rectangles[currentRectangle].GetArea();
                rectangles[currentRectangle].GetPerimeter();
                currentRectangle++;
            } else {
                cout << "Maximum number of rectangles reached!\n";
            }
        } else if (choice == 2) {
            int index;
            cout << "Enter the rectangle number to update (0 to " << currentRectangle -1 << "): ";
            cin >> index;
            if (index >= 0 && index < currentRectangle) {
                rectangles[index].UpdateDimensions();
                rectangles[index].GetArea();
                rectangles[index].GetPerimeter();
            } else {
                cout << "Invalid rectangle number!\n";
            }
        } else if (choice == 3) {
            for (int i = 0; i < currentRectangle; i++) {
                cout << "\nRectangle " << i + 1 << " details:\n";
                rectangles[i].Display();
            }
        } else if (choice == 4) {
            cout << "Exiting the program.\n";
        } else {
            cout << "Please enter a valid number.\n";
        }

    }
    cout<<"24CE131_HETVI";
        return 0;


}
