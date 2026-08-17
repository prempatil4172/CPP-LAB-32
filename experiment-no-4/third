#include <iostream>
using namespace std;
class Product{
private:
    int productID;
    string productName;
    int quantity;
    float unitPrice;
public:
    void acceptDetails(){
        cout << "Enter Product ID: ";
        cin >> productID;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }
    float calculateTotalCost(){
        return quantity * unitPrice;
    }
    void displayDetails(){
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unitPrice << endl;
        cout << "Total Cost: " << calculateTotalCost() << endl;
    }
};
int main(){
    Product p;
    p.acceptDetails();
    p.displayDetails();
    return 0;
}