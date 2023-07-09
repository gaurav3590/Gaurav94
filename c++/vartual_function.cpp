// virtual function
#include<iostream>
using namespace std;
class Base
{
    public:
   virtual void display() = 0;  //  pure virtual function        (Abstract function when virtual function is Pure virtual function)
    // {
    //     cout<<"Base class display function called..."<<endl;
    // }
    void show()
    {

        cout<<"Base class Show function called..."<<endl;
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"Derived class display function called..."<<endl;
    }
};
int main()
{
    Base *a;
    Derived d;
    // a = &b;
    // a->display(); 
    a->show();
    a = &d;
    a->display(); 

    return 0;
}

// run time polymersioma
// compile time -> function overloading, oprator overloading