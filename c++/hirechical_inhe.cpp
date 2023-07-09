// Hirechical Inheritance...

#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setbase()
    {
        cout<<"Enter A : ";
        cin>>a;
    }
    void getbase()
    {
        cout<<"Value of A is : "<<a<<endl;
    }
};
class derived : public base
{
    protected:
    int b;
    public:
    void setderived()
    {
        base :: setbase();
        cout<<"Enter B : ";
        cin>>b;
    }
    void getderived()
    {
        base :: getbase();
        cout<<"Value of B is : "<<b<<endl;
        cout<<"Additoin of A and B is : "<<a+b<<endl;
    }
};
class abc : public base
{
    protected:
    int c;
    public:
    void setabc()
    {
        base :: setbase();
        cout<<"Value of C is : ";
        cin>>c;
    }
    void getabc()
    {
        base ::getbase();
        cout<<"Value of C is : "<<c<<endl;
        cout<<"Product of A and c is : "<<a*c<<endl;
    }
};
int main()
{
    derived d;
    d.setderived();
    d.getderived();

    abc a;
    a.setabc();
    a.getabc();
}

