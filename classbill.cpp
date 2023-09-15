#include <iostream>
#include <string>
using namespace std;

class Shopping {
private:
    string itemNames[3];
    double itemPrices[3];
    int itemQuantities[3];

public:
    Shopping() {
        for (int i = 0; i < 3; ++i) {
            itemNames[i] = "";
            itemPrices[i] = 0.0;
            itemQuantities[i] = 0;
        }
    }

    void inputItemDetails() {
        for (int i = 0; i < 3; ++i) {
            cout << "Enter item name: "<<endl;
            getline(cin, itemNames[i]);

            cout << "Enter price for " << itemNames[i] << ": "<<endl;
            cin >> itemPrices[i];

            cout << "Enter quantity for " << itemNames[i] << ": "<<endl;
            cin >> itemQuantities[i];
            
           cin.ignore();
        }
    }

    double calculateTotalAmount() {
        double total = 0.0;
        for (int i = 0; i < 3; ++i) {
            total += itemPrices[i] * itemQuantities[i];
        }
        return total;
    }

    void displayBill() {
        cout << "Bill Details:" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Item Name: " << itemNames[i] << " , Quantity: " << itemQuantities[i] << ", Amount: Rs." << (itemPrices[i] * itemQuantities[i]) << endl;
        }

        double totalAmount = calculateTotalAmount();
        cout << "Total Bill Amount: Rs." << totalAmount << endl;
    }
};

int main() {
    Shopping shopping;
    shopping.inputItemDetails();
    shopping.displayBill();

    return 0;
}
