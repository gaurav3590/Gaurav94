/*  *   Constructor   --->   Class name and Function name are same.
    *   Constructor is automatically called by it self , when Object is create.
    *   Constructor can not return and not return the value.
    *   Constructor can always define in public section not in privet section.
    *   Consructor have 2 types   1. Defualt Constructore
    *                             2. Parameterized Constructor
*/

#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    test()      //Defualt Constructor
    {
        cout << "Defualt Constructor is calling......" << endl;
        x = 2;
    }
    test(int n)      // Parameterized Constructor
    {
        cout << "Parameterized Constructor is calling....." <<endl;
        x = n;
    }
    void getdata()
    {
        cout << " Value of X is : " << x << endl;
    }
};
int  main()
{
    test a,s(50);
    a.getdata();
    s.getdata();
}