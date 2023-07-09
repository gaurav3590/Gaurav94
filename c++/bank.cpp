#include <iostream>
using namespace std;
class bank
{
        float balance = 5000;

public:
        void deposite(int n)
        {
                balance = balance + n;
        }
        void withdraw(int n)
        {
                if (n <= balance)
                {
                        balance = balance - n;
                }
                else
                {
                        cout << "insufficient Balance" << endl;
                }
        }
        void show()
        {
                cout << "Your balance is : " << balance << endl;
        }
};

int main()
{
        bank b;
        int ch, amt;
        int choice;
        while (ch != 0)
        {
                cout << "\n-----MENU-----  " << endl;
                cout << "1 : Deposite  " << endl;
                cout << "2 : Withdraw  " << endl;
                cout << "3 : Show Balance   " << endl;
                cout << "4 : Exit  " << endl;
                cout << "Enter Your choice :   ";
                cin >> ch;
                switch (ch)
                {

                case 1:
                        cout << "Enter deposit : ";
                        cin >> amt;
                        b.deposite(amt);
                        break;
                case 2:
                        cout << "Enter Withdraw : ";
                        cin >> amt;
                        b.withdraw(amt);
                        break;
                case 3:
                        b.show();
                        break;
                case 4:
                        cout << " Thanks visit again..." << endl;
                        ;
                        return 0;
                        break;

                default:
                        cout << "Invalid input " << endl;
                }
        }
        return 0;
}
