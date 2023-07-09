// oop's 1st concept -->  class and object

#include<iostream>
using namespace std;
class car
{
    int a;      //  data mamber     privet

    public:
    int b;
    void setdata(int n)     //function
    {
        a = n;
    }
    void setb(int n)
    {
        b = n;
    }
    void getdata()
    {
        cout << "Value of A : " << a << endl;
        cout << "Value of B : " << b << endl;
    }
};
int  main()
{
    car x;      // objecct
    // x.a=10;
    x.setdata(5);
    x.setb(10);
    x.getdata();
    return 0;
}