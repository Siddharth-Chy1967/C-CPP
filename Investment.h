#ifndef INVESTMENT_H
#define INVESTMENT_H

#include <string>
using namespace std;

class Investment {
private:
    string assetName;
    int quantity;
    double purchasePrice;
    double currentPrice;

public:
    Investment();
    Investment(string name, int qty, double purchase, double current);

    string getAssetName() const;
    int getQuantity() const;
    double getPurchasePrice() const;
    double getCurrentPrice() const;

    double calculateCostBasis() const;
    double calculateCurrentValue() const;
    double calculateProfitLoss() const;

    void displayAssetInfo() const;
};

#endif
