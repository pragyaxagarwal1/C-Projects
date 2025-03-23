#include <iostream>
using namespace std;
int main()
{
    float balance = 1000.0;
    int choice;
    double amount;

    do
    {
        cout << "ATM menu: " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choices" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Your bank balance is: " << balance << endl;
            break;

        case 2:
            cout << "Enter the deposit amount: " << endl;
            cin >> amount;
            balance = balance + amount;
            cout << "Deposit amount entered successfully!" << endl;
            break;

        case 3:
            cout << "Enter the amount to be withdrawn: " << endl;
            cin >> amount;
            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "Your new balance is: " << balance << endl;
            }
            else
            {
                cout << "Insufficient balance!!!" << endl;
            }
            break;

        case 4:
            cout << "Thank you for choosing our ATM" << endl;
            break;

        default:
            cout << "Invalid choice!!! Please enter your choice again!" << endl;
        }
    } while (choice != 4);

    return 0;
}