#include <iostream>
using namespace std;
class account
{
protected:
    string customer_name;
    int account_no;
    float balance = 0;

public:
    string account_type;
    account()
    {
        cout << "Enter the name of the customer -->";
        cin.ignore();
        getline(cin, customer_name);
        cout << "Enter the account number -->";
        cin >> account_no;
        cout << "Enter the balance -->";
        cin >> balance;
    }
    void withdraw()
    {
        float withdraw_amount;
        cout << "Enter the withdrawal amount -->";
        cin >> withdraw_amount;
        if (withdraw_amount > balance)
        {
            cout << "Ensufficient Balance\n";
        }
        else
        {
            balance -= withdraw_amount;
            display();
        }
    }

    void deposite()
    {
        int deposite_amount;
        cout << "Enter the deposite amount -->";
        cin >> deposite_amount;
        balance += deposite_amount;
        display();
    }
    void display()
    {
        cout << "The balance in account is --> " << balance << endl;
    }
    virtual void check_book() = 0;
    virtual void compound_interest() = 0;
};
class sav_acc : public account
{

public:
    void compound_interest()
    {
        balance += (balance / 2);
        cout << "The interest has been imposed\n";
    }
    void check_book()
    {
        cout << "The check book cannot be provided this is savings account" << endl;
    }
};
class cur_acc : public account
{
    int penalty_amount = 10;

public:
    void compound_interest() {}
    void check_book()
    {
        cout << "The name of the customer is -->" << customer_name << endl;
        cout << "The name of the account number is -->" << account_no << endl;
        cout << "The name of the account type is -->" << account_type << endl;
        cout << "The name of the balance in account is -->" << balance << endl;
    }
    void penalty()
    {
        if (balance < 1000)
        {
            cout << "Mininal balance not kept account updated \n";
            balance -= penalty_amount;
            display();
        }
    }
};
int main()
{
    char a;
    cout << "Enter the type of the account \"c\" for current account \"s\" for saving account -->";
    cin >> a;
    if (a == 'c')
    {
        int choice;
        cur_acc current_account;
        current_account.account_type = "Current";
        do
        {
            cout << "1.Check Balance\n2.Withdraw\n3.deposite\n4.Get check-book\n0.EXIT\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                current_account.display();
                break;
            case 2:
                current_account.withdraw();
                current_account.penalty();
                break;
            case 3:
                current_account.deposite();
                current_account.penalty();
                break;
            case 4:
                current_account.check_book();
                break;
            case 0:
                cout << "program has been terminated\n";
                break;
            default:
                cout << "Invalid Choice\n";
                break;
            }
        } while (choice != 0);
    }
    else if (a == 's')
    {
        int choice;
        sav_acc saving_account;
        saving_account.account_type = "Savings";
        do
        {
            cout << "1.Check Balance\n2.Withdraw\n3.deposite\n4.Get check-book\n0.EXIT\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                saving_account.display();
                break;
            case 2:
                saving_account.withdraw();
                saving_account.compound_interest();
                break;
            case 3:
                saving_account.deposite();
                saving_account.compound_interest();
                break;
            case 4:
                saving_account.check_book();
                break;
            case 0:
                cout << "program has been terminated\n";
                break;
            default:
                cout << "Invalid Choice\n";
                break;
            }
        } while (choice != 0);
    }
    else
    {
        cout << "Invalid choice program terminated!!!" << endl;
    }
    return 0;
}