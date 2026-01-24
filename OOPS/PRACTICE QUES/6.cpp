/* Question : Create a class BankAccount with private attributes accountNumber and
balance. Implement public methods deposit(), withdraw(), and getBalance() to
manage the account */

#include <iostream>
using namespace std;

class BankAccount
{
    int accountNum, balance;

public:
    BankAccount(int accNo, int initialBal = 1000)
    {
        accountNum = accNo;
        balance = initialBal;
    }
    int deposit(int amount)
    {
        if (amount > 0)
        {
            cout << "deposit money : " << amount << endl;
            balance += amount;
            return balance;
        }
        return balance;
    }
    int withdraw(int amount)
    {
        if (amount <= balance && amount >> 0)
        {
            cout << "withdraw money : " << amount << endl;
            balance -= amount;
            return balance;
        }
        return balance;
    }

    void getBalance()
    {
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount obj1(123);
    obj1.getBalance();
    obj1.deposit(800);
    obj1.withdraw(400);
    obj1.getBalance();
    return 0;
}