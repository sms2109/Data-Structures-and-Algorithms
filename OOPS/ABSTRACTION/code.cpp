#include <iostream>
using namespace std;

// Abstract Class
class ATM {
public:
    // Pure virtual function (important part only)
    virtual void withdraw(int amount) = 0;  
};

// SBI ATM class implementing abstract function
class SBI_ATM : public ATM {
public:
    void withdraw(int amount) {
        // Hidden complex details
        cout << "Withdrawing Rs." << amount << " from SBI ATM\n";
        cout << "Connecting to SBI server...\n";
        cout << "Validating account...\n";
        cout << "Dispensing cash...\n";
        cout << "Transaction successful in SBI ATM!\n\n";
    }
};

// HDFC ATM class implementing abstract function
class HDFC_ATM : public ATM {
public:
    void withdraw(int amount) {
        // Hidden internal details (different for each bank)
        cout << "Withdrawing Rs." << amount << " from HDFC ATM\n";
        cout << "Connecting to HDFC server...\n";
        cout << "Verifying account...\n";
        cout << "Dispensing cash...\n";
        cout << "Transaction successful in HDFC ATM!\n\n";
    }
};

// Function that works with ANY ATM because of abstraction
void processWithdrawal(ATM* atm, int amount) {
    atm->withdraw(amount); // Runtime polymorphism
}

int main() {
    SBI_ATM sbi;
    HDFC_ATM hdfc;

    // Using abstraction + polymorphism
    ATM* atmPtr;

    atmPtr = &sbi;
    processWithdrawal(atmPtr, 1000);

    atmPtr = &hdfc;
    processWithdrawal(atmPtr, 2000);

    return 0;
}
