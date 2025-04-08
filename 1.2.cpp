
#include<iostream>
using namespace std;

class Product {
    string name;
    string Id;
    int quantity, new_quantity;
    double price;

public:
    void GetProduct() {
        cout << "Enter ID: ";
        cin >> Id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
    }



    double GetPrice() {
        return price * quantity;
    }



    void UpdateQuantity() {
        cout << "Enter new quantity: ";
        cin >> new_quantity;
        quantity = new_quantity;
    }

    void DisplayProduct() {
        double product_total_value = GetPrice();
        cout << "Product Name: " << name <<endl<< "ID: " << Id<<endl
             << "Quantity: " << quantity<<endl << "Price: " << price<<endl
             << "Total Value: " << product_total_value << endl;
    }
};

int main() {
    int NumOfProduct;
    cout << "Enter number of products you want to buy: ";
    cin >> NumOfProduct;

    Product products[NumOfProduct];

    double total_value_of_all_products = 0;

    for (int i = 0; i < NumOfProduct; i++) {
             cout << "--- Enter details for Product " << (i + 1) << " ---"<<endl;
        products[i].GetProduct();
        products[i].UpdateQuantity();
    }


    double totalInventoryValue = 0;
    cout <<endl<< "=== Inventory Summary ==="<<endl;
    for (int i = 0; i < NumOfProduct; i++) {
        products[i].DisplayProduct();
        totalInventoryValue += products[i].GetPrice();
        cout<<endl;
    }

cout <<endl<< "Total Inventory Value: " << totalInventoryValue << endl;

    cout << "24CE131_HETVI" << endl;

    return 0;
}
