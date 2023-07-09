//  Hotel Managment..
#include <iostream>
using namespace std;
class name
{
    int balance = 0;

public:
    void setdata()
    {
        cout << "                         HOTEL SHREE GANESH" << endl
             << endl;
        cout << "--> Pleace Select Menu." << endl;
        cout << "===========================" << endl;
        cout << endl<< "1.KAJUKARI----------------------- 250/-" << endl;
        cout << "2.PALAK PANIR----------------------- 230/-" << endl;
        cout << "3.TANDURI ROTI----------------------- 45/-" << endl;
        cout << "4.BETTER ROTI----------------------- 50/-" << endl;
        cout << "5.BETTER MILK----------------------- 30/-" << endl;
    }
    int kajukari(int n)
    {
        balance += n * 250;
    }
    int palakpanir(int n)
    {
        balance += n * 230;
    }
    int tanduriroti(int n)
    {
        balance += n * 45;
    }
    int butterroti(int n)
    {
        balance += n * 50;
    }
    int buttermilk(int n)
    {
        balance += n * 30;
    }
};

int main()
{
    name b;
    b.setdata();
    int a;
    cout << "Enter Quantity :" << endl;
    cout << a;
}