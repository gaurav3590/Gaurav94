#include <iostream>
using namespace std;
class base
{
protected:
    int a;
    int setbase(int x)
    {
        a = x;
    }
    void getbase()
    {
        cout << "Value of A : " << a << endl;
    }
};
class derived : public base
{
    int b;

public:
    void setderived(int y)
    {
        base ::setbase(10);
        b = y;
    }
    void getderived()
    {
        base ::getbase();
        cout << "Value of B : " << b << endl;
    }
    void product()
    {
        cout<<"Product of A and B : "<<(a * b)<<endl;
    }
};
    int main()
    {
        derived a;
        a.setderived(20);
        // a.getbase();
        a.getderived();
        a.product();
    }
