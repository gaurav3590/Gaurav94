#include <iostream>
using namespace std;
class Bank
{

};
class saving : public Bank
{
    int bal = 1000;

public:
    void sdeposite(int x)
    {
        bal = bal + x;
        cout << "Deposite Amount : " << x << endl;
    }
    void swithdraw(int y)
    {
        if (bal < y)
        {
            cout << "you have not an amount:" << endl;
        }
        else
        {
            bal = bal - y;
            cout << "your withdraw Amount is:" << y << endl;
        }
    }
    void sshowbalance()
    {
        cout << "show balance " << bal << endl;
    }
};
class current : public Bank
{
    int balance = 10000;

public:
    void cdeposite(int x)
    {
        balance = balance + x;
        cout << "Depoiste Balance : " << x << endl;
    }
    void cwithdraw(int y)
    {

        if (balance < y)
        {
            cout << "you have not  an amount:" << endl;
        }
        else
        {
            balance = balance - y;
            cout << "your withdraw balance is:" << y << endl;
        }
    }
    void cshowbalance()
    {
        cout << " balance : " << balance << endl;
    }
};
class Person : public saving, public current
{
    protected:
    char name[30];
    int Ac_no;

public:
    char ac_type[20];
    void setdata()
    {
        cout << " Account type :";
        cin >> ac_type;
    }
    void getdata()
    {
        cout << "your type is :" << ac_type << endl;
    }
};
int main()
{
   Person p;
   p.setdata();
   p.getdata();
    int ch, x;
    bool b1;
    b1 = p.ac_type == "current";
        cout<<"B: "<<b1;
    while (ch != 4)
    {
        cout << "1. Diposite Amount " << endl;
        cout << "2. Withraw Amount " << endl;
        cout << "3. Show Balance " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your choice " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << " deposite:" << endl;
            cin >> x;
            if (b1 == 0)
                p.sdeposite(x);
            else
                p.cdeposite(x);
            break;
        case 2:
            cout << " withdraw:" << endl;
            cin >> x;
            if (b1 == 0)
                p.swithdraw(x);
            else
                p.cwithdraw(x);
            break;
        case 3:
            if (b1 == 0)
                p.sshowbalance();
            else
                p.cshowbalance();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
    }
}
