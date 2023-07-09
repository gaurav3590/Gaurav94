#include <iostream>
using namespace std;
class base //parent class
{
    public:
    int a;
    void setbase ()
    {
        cout<<"enter a:";
        cin>>a;
    }
    void getbase()
    {
        cout<<"value of a:"<<a<<endl;
    }
};

class derived : public base //public
