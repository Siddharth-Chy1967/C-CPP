#include "Portfolio.h"
#include <iostream>
using namespace std;

Portfolio::Portfolio() {
}

void Portfolio::addInvestment(const Investment& inv) {
    investments.push_back(inv);
}

double Portfolio::calculateTotalValue() const {
    double total = 0.0;
    for (size_t i = 0; i < investments.size(); i++) {
        total += investments[i].calculateCurrentValue();
    }
    return total;
}

double Portfolio::calculateTotalProfitLoss() const {
    double total = 0.0;
    for (size_t i = 0; i < investments.size(); i++) {
        total += investments[i].calculateProfitLoss();
    }
    return total;
}

void Portfolio::displayPortfolio() const {
    cout << "===== SmartInvest Portfolio Summary =====" << endl;
    for (size_t i = 0; i < investments.size(); i++) {
        investments[i].displayAssetInfo();
    }
    cout << "----------------------------------------" << endl;
    cout << "Total Portfolio Value: " << calculateTotalValue() << endl;
    cout << "Total Profit/Loss: " << calculateTotalProfitLoss() << endl;
}
