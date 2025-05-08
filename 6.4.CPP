#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor\n";
    }

    // Virtual destructor to ensure proper cleanup
    virtual ~Base() {
        cout << "Base destructor\n";
    }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() {
        data = new int[100];  // Dynamically allocated memory
        cout << "Derived constructor (allocated memory)\n";
    }

    ~Derived() override {
        delete[] data;  // Free allocated memory
        cout << "Derived destructor (released memory)\n";
    }
};

int main() {
    // Polymorphic deletion
    Base* obj = new Derived();  // Create Derived object using Base pointer
    delete obj;  // Correctly calls both destructors
cout<<endl<<" 24ce131 _ hetvi ";
    return 0;
}
