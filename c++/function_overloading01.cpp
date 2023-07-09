#include<iostream>
using namespace std;
class variuses
{
    int area;
    public:
    void varius()
    {
        cout<<"\t\tvarius shapes"<<endl;
    }
    void varius(int radius)
    {
        area = 3.14*(radius*radius);
        cout<<"Circle Area : "<<area<<endl;
    }
    void varius(int height,int base)
    {
        area =( height * base ) / 2;
        cout<<"Triangle  Area :"<<area<<endl;
    }
    void varius(double x)
    {
        area = x * x;
        cout<<"Square Area : "<<area<<endl;
    }
    void varius (double h,double w)
    {
        area = (h * w);
        cout<<"Rectangle Area : "<<area<<endl;
    }
};
int main()
{
    variuses a;
    a.varius();
    a.varius(5);
    a.varius(32,24);
    a.varius(60.0);
    a.varius(30.0,60.0);
}