//  Multiple Inheritance...

#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;
    public:
    void setbase1(int x)
    {
        a = x;
    }
    void getbase1()
    {
        cout<<"Value of A is : "<<a<<endl;
    }
};
class base2
{
    protected:
    int b;
    public:
    void setbase2(int x)
    {
        b = x;
    }
    void getbase2()
    {
        cout<<"Value of B is : "<<b<<endl;
    }
};
class derived : protected base2,protected base1
{
    protected:
    int c;
    public:
    void setderived(int x)
    {
        base1 :: setbase1 (11);     // protected
        base2 :: setbase2 (12);     // protected
        c = x;
    }
    void getderived()
    {
        base1 :: getbase1();        // protected
        base2 :: getbase2();        // protected  
        cout<<"Value of C is : "<<c<<endl;
        cout<<"Value of A, b and c is : "<<a+b*c<<endl;
    }
};

int main()
{
    derived a;
    //a.setbase1(10);        (public)
    //a.setbase2(20);        (public)
    a.setderived(3);
    //a.getbase1();          (public)
    //a.getbase2();          (public)
    a.getderived();
}