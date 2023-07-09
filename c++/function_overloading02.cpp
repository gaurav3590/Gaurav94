#include <iostream>
using namespace std;
class solides
{
    int volume;

public:
    void solid()
    {
        cout << "\tSOLID SHAPE" << endl;
    }
    void solid(int a)
    {
        volume = (a * a * a);
        cout << " Volume of Cube : " << volume << endl;
    }
    void solid(int r, int h)
    {
        volume =  3.14 * (r*r) * h/3;
        cout << "Volume of Circle Cone : " << volume << endl;
    }
    void solid(double r)
    {
        volume = (4* 3.14 * (r*r*r))/3;
        cout << "Volume of Sphere : " << volume << endl;
    }
    void solid(double l, double w,double h)
    {
        volume = (l * w * h)/3;
        cout << "Volume of Pyramid : " << volume << endl;
    }
};
int main()
{
    solides a;
    a.solid();
    a.solid(15);
    a.solid(20,40);
    a.solid(6.0);
    a.solid(30.0,90.0,60.0);
}