// constuctor overloading..

#include<iostream>
using namespace std;
class test
{
    public:
    test()      // default
    {
        cout<<"Default Constructor is called.."<<endl;
    }
    test (int n)
    {
        cout<<"Onr parameterized constructor, one int argument is : "<<n<<endl;
    }
    test (int x,int y)
    {
        cout<<"Two paramiterized Constructor, two Argument is : "<<x<<" and "<<y<<endl;
    }
    test (char p)
    {
        cout<<"One Char Parameterized Constuctor , one char argument is : "<<p<<endl;
    }
};
int main()
{
    test d,a(20,50),b('A'),c(90);
}
