#include<iostream>
using namespace std;

class dynamicArray {
    int* data;
    int capacity;
    int size;

    void resize() {
        cout << "Resize function called" << endl;
        capacity *= 2;
        int* newdata = new int[capacity];
        for (int i = 0; i < size; i++) {
            newdata[i] = data[i];
        }
        delete[] data;
        data = newdata;
    }

public:
    dynamicArray() {
        capacity = 2;
        size = 0;
        data = new int[capacity];
    }

    ~dynamicArray() {
        delete[] data;
    }

    void insert(int value) {
        if (size == capacity)
            resize();
        data[size++] = value;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        for (int i = index; i < size - 1; i++)
            data[i] = data[i + 1];
        size--;
    }

    int get(int index) const {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return -1;
        }
        return data[index];
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }

    void display() const {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    dynamicArray arr;

    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    arr.insert(40);

    cout << "After insertions: ";
    arr.display();

    arr.remove(1);

    cout << "After removal: ";
    arr.display();

    cout << "Current size: " << arr.getSize() << endl;
    cout << "Current capacity: " << arr.getCapacity() << endl;

     cout<<endl<<" 24ce131 _ hetvi ";

    return 0;
}
