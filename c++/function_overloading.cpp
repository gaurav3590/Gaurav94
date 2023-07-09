// Function overloading..

#include<iostream>
using namespace std;
class tester
{
    public:
    void test()      // default
    {
        cout<<"Default Constructor is called.."<<endl;
    }
    void test (int n)
    {
        cout<<"Onr parameterized constructor, one int argument is : "<<n<<endl;
    }
    void test (int x,int y)
    {
        cout<<"Two paramiterized Constructor, two Argument is : "<<x<<" and "<<y<<endl;
    }
    void test (char p)
    {
        cout<<"One Char Parameterized Constuctor , one char argument is : "<<p<<endl;
    }
};
int main()
{
    tester a;
    a.test();
    a.test(90);
    a.test(50,60);
    a.test('A');
}
