#include "Investment.h"
#include "Portfolio.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Portfolio portfolio;
    int numInvestments;

    cout << "Enter number of investments: ";
    cin >> numInvestments;

    for (int i = 0; i < numInvestments; i++) {
        string name;
        int quantity;
        double purchasePrice;
        double currentPrice;

        cout << "Enter asset name: ";
        cin >> name;

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Enter purchase price: ";
        cin >> purchasePrice;

        cout << "Enter current price: ";
        cin >> currentPrice;

        Investment inv(name, quantity, purchasePrice, currentPrice);
        portfolio.addInvestment(inv);
    }

    cout << endl;
    portfolio.displayPortfolio();

    return 0;
}
