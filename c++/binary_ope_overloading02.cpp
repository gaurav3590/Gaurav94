//  BINARY OPERATOR OVERLOADING.....

#include <iostream>
using namespace std;
class circle
{
    int r,pi;

public:
    void setdata(int);
    double getdata()
    {
        return 3.14*(r*r);
    }
    circle operator*(circle &n)
    {
        circle c;
        c.r = r * n.r;
        return c;
    }
};
void circle ::setdata(int rad)
{
     r = rad;
}
int main()
{
    circle a, b, c;
    double volume = 0;
    a.setdata(6);
    volume = a.getdata();
    cout << "box A volume is : " << volume << endl;
    b.setdata(5);
    volume = b.getdata();
    cout << "box B volume is : " << volume << endl;

    c = a * b;
    volume = c.getdata();
    cout << "box C volume is : " << volume << endl;
}