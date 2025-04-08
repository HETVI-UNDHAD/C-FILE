#include<iostream>
#include<string.h>
using namespace std;

struct bank
{
     long long  AccountNumber;
    char AccHolderName[80];
    float balance;

    void getdata()
    {
        cout << "Enter the account number of bank ";
        cin >> AccountNumber;
        cout << "Enter the name of holder ";
        cin >> AccHolderName;
        cout << "Enter the balance ";
        cin >> balance;
    }

    void withdraw()
    {
        double amount;
        cout << "Enter the withdrawal amount: ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Insufficient funds." << endl;
        }
        else if (amount <= 0)
        {
            cout << "Withdrawal amount must be positive." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn " << amount << ". New balance: " << balance << endl;
        }
    }

    void deposit()
    {
        double amount;
        cout << "Enter the deposit amount: ";
        cin >> amount;
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        }
        else
        {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void putdata()
    {
        cout << "Account holder's name: " << AccHolderName << endl;
        cout << "account number,: " << AccountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    struct bank b1, b2;

    cout << "Enter Bank details for account 1:\n";
    b1.getdata();
    b1.deposit();
    b1.withdraw();


    cout <<endl<< "Enter Bank details for account 2:\n";
    b2.getdata();
    b2.deposit();
    b2.withdraw();
    cout <<endl<< "Bank details for account 1:\n";
    b1.putdata();
    cout <<endl<< "Bank details for account 2:\n";
    b2.putdata();

    cout<<"24CE131_HETVI";

    return 0;
}
