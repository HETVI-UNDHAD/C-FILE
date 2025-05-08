#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char* FILE_NAME = "inventory.txt";


struct Product {
    char name[50];
    int quantity;
    double price;
};

// Function to add a new product
void addProduct() {
    Product p;
    cout << "Enter product name: ";
    cin.ignore();
    cin.getline(p.name, 50);
    cout << "Enter quantity: ";
    cin >> p.quantity;
    cout << "Enter price: ";
    cin >> p.price;

    ofstream outFile(FILE_NAME, ios::app);
    if (!outFile) {
        cerr << "Error: Cannot open file for writing.\n";
        return;
    }

    outFile << p.name << "," << p.quantity << "," << p.price << "\n";
    outFile.close();

    cout << "Product added successfully.\n";
}

// Function to view all products
void viewInventory() {
    ifstream inFile(FILE_NAME);
    if (!inFile) {
        cerr << "Error: Cannot open file for reading.\n";
        return;
    }

    char line[100];
    cout << "\nInventory:\n";
    cout << "------------------------------\n";
    while (inFile.getline(line, 100)) {
        Product p;
        sscanf(line, "%49[^,],%d,%lf", p.name, &p.quantity, &p.price);
        cout << "Name: " << p.name << ", Quantity: " << p.quantity << ", Price: $" << p.price << "\n";
    }
    inFile.close();
    cout << "------------------------------\n";
}

// Function to search for a product by name
void searchProduct() {
    char searchName[50];
    cout << "Enter product name to search: ";
    cin.ignore();
    cin.getline(searchName, 50);

    ifstream inFile(FILE_NAME);
    if (!inFile) {
        cerr << "Error: Cannot open file for reading.\n";
        return;
    }

    bool found = false;
    char line[100];
    while (inFile.getline(line, 100)) {
        Product p;
        sscanf(line, "%49[^,],%d,%lf", p.name, &p.quantity, &p.price);
        if (strcmp(p.name, searchName) == 0) {
            cout << "Product Found:\n";
            cout << "Name: " << p.name << ", Quantity: " << p.quantity << ", Price: $" << p.price << "\n";
            found = true;
            break;
        }
    }
    inFile.close();

    if (!found) {
        cout << "Product not found.\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add Product\n";
        cout << "2. View Inventory\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: addProduct(); break;
            case 2: viewInventory(); break;
            case 3: searchProduct(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);
    cout<<endl<<" 24ce131 _ hetvi ";

    return 0;
}
