//  Destructor Function

#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    test()      // defualt constructor
    {
        cout<<"Defualt constructor is calling...."<<endl;
        x = 2;
    }
    ~test()     // Destructor 
    {
        cout<<"Destructor is calling...."<<endl;
    }
    test (int n)        // parameterized Constructor
    {
        cout<<"parameterized is calling...."<<endl;
        x = n;
    }
    void getdata()
    {
        cout<<"Value of x is : "<< x << endl;
    }
};
int main()
{
    test a;
    {
        test b(50);
        b.getdata();
    }
    a.getdata();
}