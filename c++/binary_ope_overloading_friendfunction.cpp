//  Binary operator overloading using friend function..
#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    void setdata(int,int,int);
    int getdata()
    {
        return l*b*h;
    }
    friend box operator+(box p,box q)    // object as argument
    {
        box t;
        t.l = p.l + q.l;
        t.b = p.b + q.b;
        t.h = p.h + q.h;
        return t;   // object as result
    }
};
void box :: setdata(int len,int bre,int hei)
{
    l=len;
    b=bre;
    h=hei;
}
int main()
{
    box a,b,c;
    int volume = 0;
    a.setdata (2,4,2);
    volume = a.getdata();
    cout<<"box A volume is : "<<volume<<endl;
     b.setdata (2,2,2);
    volume = b.getdata();
    cout<<"box A volume is : "<<volume<<endl;

    c = a + b;
    volume = a.getdata();
    cout<<"Box A volume is : "<<volume<<endl;
}
