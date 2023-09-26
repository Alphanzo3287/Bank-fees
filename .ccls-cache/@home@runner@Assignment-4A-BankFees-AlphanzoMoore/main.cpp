// Alphanzo Moore

//CIS-5 Online

// September 14, 2023

// Lab 4A: Alphanzo Moore - <Bank fees>

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double MONTHLY_FEE = 10.0;
    const double LOW_BALANCE_FEE = 15.0;
    const double CHECK_FEE_1 = 0.10;
    const double CHECK_FEE_2 = 0.08;
    const double CHECK_FEE_3 = 0.06;
    const double CHECK_FEE_4 = 0.04;
    
    double balance;
    int numChecks;
    
    // Input
    cout << "Enter the beginning balance: $";
    cin >> balance;
    
    if (balance < 0) {
        cout << "URGENT: Your account is overdrawn!" << endl;
        return 1;
    }
    
    cout << "Enter the number of checks written: ";
    cin >> numChecks;
    
    if (numChecks < 0) {
        cout << "Invalid input. Number of checks cannot be negative." << endl;
        return 1;
    }
    
    // Calculate fees
    double checkFee;
    if (numChecks < 20) {
        checkFee = numChecks * CHECK_FEE_1;
    } else if (numChecks < 40) {
        checkFee = numChecks * CHECK_FEE_2;
    } else if (numChecks < 60) {
        checkFee = numChecks * CHECK_FEE_3;
    } else {
        checkFee = numChecks * CHECK_FEE_4;
    }
    
    if (balance < 400) {
        balance -= LOW_BALANCE_FEE;
    }
    
    double totalFees = MONTHLY_FEE + checkFee;
    balance -= totalFees;
    
    // Output
    cout << fixed << showpoint << setprecision(2);
    cout << "Monthly service fees: $" << totalFees << endl;
    cout << "Final balance: $" << balance << endl;
    
    return 0;
}
