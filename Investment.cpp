#include "Investment.h"
#include <iostream>
using namespace std;

Investment::Investment() {
    assetName = "";
    quantity = 0;
    purchasePrice = 0.0;
    currentPrice = 0.0;
}

Investment::Investment(string name, int qty, double purchase, double current) {
    assetName = name;
    quantity = qty;
    purchasePrice = purchase;
    currentPrice = current;
}

string Investment::getAssetName() const { return assetName; }
int Investment::getQuantity() const { return quantity; }
double Investment::getPurchasePrice() const { return purchasePrice; }
double Investment::getCurrentPrice() const { return currentPrice; }

double Investment::calculateCostBasis() const {
    return quantity * purchasePrice;
}

double Investment::calculateCurrentValue() const {
    return quantity * currentPrice;
}

double Investment::calculateProfitLoss() const {
    return calculateCurrentValue() - calculateCostBasis();
}

void Investment::displayAssetInfo() const {
    cout << "Asset: " << assetName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Purchase Price: " << purchasePrice << endl;
    cout << "Current Price: " << currentPrice << endl;
    cout << "Cost Basis: " << calculateCostBasis() << endl;
    cout << "Current Value: " << calculateCurrentValue() << endl;
    cout << "Profit/Loss: " << calculateProfitLoss() << endl;
    cout << endl;
}
