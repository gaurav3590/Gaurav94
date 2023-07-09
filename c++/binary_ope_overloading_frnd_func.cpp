// binary operator overloading using friend function

#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    void setdata (int,int,int);
    int getdata()
    {
        return l*b*h;
    }
    friend box operator+(box p,box q)   // object as argument
    {
        box t;
        t.l = p.l + p.l;
        t.b = p.b + p.b;
        t.h = p.h + p.h;
        return t;  // object as return;
    }
};
void box :: setdata(int len,int bre,int hei)
{
l = len;
b = bre;
h = hei;
}
int main()
{
    box a,b,c;
    int volume = 0;
    a.setdata(2,2,2);
    volume = a.getdata();
    cout<<"Box A volume is : "<<volume<<endl;

    b.setdata(3,3,3);
    volume = b.getdata();
    cout<<"Box B volume is : "<<volume<<endl;

    c = a + b;
    volume = c.getdata();
    cout<<"Box C volume is : "<< volume<<endl;
}

