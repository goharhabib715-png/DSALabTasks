#include <iostream>
using namespace std;
struct Product
{
    int productID;
    string productName;
    float price;
    int quantity;
};

int main()
{
    Product p1;
    cout << "Enter product ID: ";
    cin >> p1.productID;
    cout << "Enter product name: ";
    cin >> p1.productName;
    cout << "Enter price: ";
    cin >> p1.price;
    cout << "Enter quantity: ";
    cin >> p1.quantity;
    float totalPrice = p1.price * p1.quantity;
    cout << "\nProduct Information" << endl;
    cout << "Product ID: " << p1.productID << endl;
    cout << "Product Name: " << p1.productName << endl;
    cout << "Price: " << p1.price << endl;
    cout << "Quantity: " << p1.quantity << endl;
    cout << "Total Price: " << totalPrice << endl;
    return 0;
}
