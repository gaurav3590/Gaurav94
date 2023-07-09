#include<iostream>
using namespace std;
class varius
{
    int area;
    public:
    varius()
    {
        cout<<"\tVARIUS SHAPES"<<endl;
    }
    varius(int radius)
    {
        area = 3.14*(radius*radius);
        cout<<"Circle Area : "<<area<<endl;
    }
    varius(int height,int base)
    {
        area =( height * base ) / 2;
        cout<<"Triangle  Area :"<<area<<endl;
    }
    varius(double x)
    {
        area = x * x;
        cout<<"Square Area : "<<area<<endl;
    }
    varius (double h,double w)
    {
        area = (h * w);
        cout<<"Rectangle Area : "<<area<<endl;
    }
};
int main()
{
    varius a,b(5),c(32,24),d(60.0),e(30.0,60.0);
}