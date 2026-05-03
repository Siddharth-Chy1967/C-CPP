# SmartInvest

A simple C++ portfolio tracker for managing investments and calculating profit/loss across assets.

## Overview

SmartInvest is a command-line application that lets you track multiple investments in a portfolio. For each asset, you enter the name, quantity, purchase price, and current price, and the program computes cost basis, current value, and profit/loss per asset along with portfolio-wide totals.

Built for CSE 220 (Assignment 6) at Arizona State University.

## Features

- Add multiple investments to a portfolio
- Per-asset cost basis, current value, and profit/loss
- Total portfolio value and total profit/loss
- Clean object-oriented design with separate `Investment` and `Portfolio` classes

## Project Structure├── Investment.h       // Investment class declaration
├── Investment.cpp     // Investment class implementation
├── Portfolio.h        // Portfolio class declaration
├── Portfolio.cpp      // Portfolio class implementation
└── main.cpp           // Entry point and user input l
## Build & Run

Compile with any C++ compiler that supports C++11 or later:

```bash
g++ main.cpp Investment.cpp Portfolio.cpp -o smartinvest
./smartinvest
```

Or with clang:

```bash
clang++ main.cpp Investment.cpp Portfolio.cpp -o smartinvest
./smartinvest
```

## Usage

Run the program and enter the number of investments, then provide details for each:Enter number of investments: 2
Enter asset name: AAPL
Enter quantity: 10
Enter purchase price: 150.00
Enter current price: 175.50
Enter asset name: VOO
Enter quantity: 5
Enter purchase price: 400.00
Enter current price: 425.00

Output:===== SmartInvest Portfolio Summary =====
Asset: AAPL
Quantity: 10
Purchase Price: 150
Current Price: 175.5
Cost Basis: 1500
Current Value: 1755
Profit/Loss: 255
Asset: VOO
Quantity: 5
Purchase Price: 400
Current Price: 425
Cost Basis: 2000
Current Value: 2125
Profit/Loss: 125

Total Portfolio Value: 3880
Total Profit/Loss: 380
## Class Reference

**Investment** — represents a single asset holding.
- `calculateCostBasis()` — quantity × purchase price
- `calculateCurrentValue()` — quantity × current price
- `calculateProfitLoss()` — current value − cost basis
- `displayAssetInfo()` — print all asset details

**Portfolio** — manages a collection of investments.
- `addInvestment(const Investment&)` — add an asset
- `calculateTotalValue()` — sum of current values
- `calculateTotalProfitLoss()` — sum of profit/loss
- `displayPortfolio()` — print full summary

## Author

Siddharth — CSE 220, ASU
