#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include "Investment.h"
#include <vector>
using namespace std;

class Portfolio {
private:
    vector<Investment> investments;

public:
    Portfolio();

    void addInvestment(const Investment& inv);

    double calculateTotalValue() const;
    double calculateTotalProfitLoss() const;

    void displayPortfolio() const;
};

#endif
