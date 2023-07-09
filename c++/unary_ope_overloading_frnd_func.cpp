// unary operator overloading using friend function

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
    friend box operator++(box p)   // object as argument
    {
        box t;
        t.l = ++p.l;
        t.b = ++p.b;
        t.h = ++p.h;
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
    box a,b;
    int volume = 0;
    a.setdata(2,2,2);
    volume = a.getdata();
    cout<<"Before Increment: "<<endl;
    cout<<"Box A volume is : "<<volume<<endl;

    b = ++a;
    volume = b.getdata();
    cout<<"After Increment : "<<volume<<endl;
    cout<<"Box A volume is : "<< volume<<endl;
}

