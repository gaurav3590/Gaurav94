#include <iostream>
using namespace std;
class solid
{
    int volume;

public:
    solid()
    {
        cout << "\tSOLID SHAPE" << endl;
    }
    solid(int a)
    {
        volume = (a * a * a);
        cout << " Volume of Cube : " << volume << endl;
    }
    solid(int r, int h)
    {
        volume =  3.14 * (r*r) * h/3;
        cout << "Volume of Circle Cone : " << volume << endl;
    }
    solid(double r)
    {
        volume = (4* 3.14 * (r*r*r))/3;
        cout << "Volume of Sphere : " << volume << endl;
    }
    solid(double l, double w,double h)
    {
        volume = (l * w * h)/3;
        cout << "Volume of Pyramid Square : " << volume << endl;
    }
};
int main()
{
    solid a,b(15),c(18,22),d(6.0),e(30.0,90.0,60.0);
}