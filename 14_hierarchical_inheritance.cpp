#include <iostream>
#include <string>

using namespace std;

class account
{
protected:
    string customer_name;
    int account_number;
    string account_type;
    float balance;

public:
    void get_account_info()
    {
        cout << "Enter customer name: ";
        getline(cin, customer_name);
        cout << "Enter account number: ";
        cin >> account_number;
        cin.ignore();
        cout << "Enter balance: ";
        cin >> balance;
        cin.ignore();
    }

    void display_balance()
    {
        cout << "Balance: " << balance << endl;
    }
};

class cur_acc : public account
{
private:
    float min_balance;
    float penalty;

public:
    cur_acc()
    {
        min_balance = 500;
        penalty = 50;
    }

    void check_min_balance()
    {
        if (balance < min_balance)
        {
            balance -= penalty;
            cout << "Minimum balance not maintained. Penalty of " << penalty << " imposed.\n";
        }
    }

    void deposit()
    {
        float amount;
        cout << "Enter deposit amount: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit successful.\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if (balance - amount < min_balance)
        {
            cout << "Withdrawal not possible. Minimum balance not maintained.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }
};

class sav_acc : public account
{
private:
    float interest_rate;

public:
    sav_acc()
    {
        interest_rate = 0.05;
    }

    void deposit()
    {
        float amount;
        cout << "Enter deposit amount: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit successful.\n";
    }

    void compute_interest()
    {
        float interest = balance * interest_rate;
        balance += interest;
        cout << "Interest computed and deposited.\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if (balance < amount)
        {
            cout << "Withdrawal not possible. Insufficient balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }
};

int main()
{
    cur_acc c;
    sav_acc s;

    c.get_account_info();
    c.display_balance();
    c.deposit();
    c.display_balance();
    c.check_min_balance();
    c.withdraw();
    c.display_balance();

    s.get_account_info();
    s.display_balance();
    s.deposit();
    s.display_balance();
    s.compute_interest();
    s.withdraw();
    s.display_balance();

    return 0;
}
