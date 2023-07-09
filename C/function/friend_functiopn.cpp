#include <iostream>
using namespace std;
class area
{
    int l,b;
    public:
    void setdata(int x,int y)
    {
        l=x ,b=y;
    }
    void getdata()
    {
        cout<<"rectanglr area is :"<<l*b<<endl;
    }
    friend area krish(area x,area y);
};

area krish (area x,area y)
{
    area t;
    t.l = x.l + y.l;
    t.b =x.b + y.b;
    return t;
}

int main()
{
    area a,b,c;
    a.setdata(2,3);
    a.getdata();
    b.setdata(3,4);
    b.getdata();

    c=krish(a,b);
    c.getdata();
}