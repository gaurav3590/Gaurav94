// Unary Oprator overloading with pre increment... 

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
    box operator++()
    {
        box t;
        t.l = ++l;
        t.b = ++b;
        t.l = ++h;
        return t;
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
    box a;
    int volume = 0;
    cout<<"Before increment "<<endl;
    a.setdata (2,2,2);
    volume = a.getdata();
    cout<<"box A volume is : "<<volume<<endl;

    cout<<"After increment "<<endl;
    ++a;
    volume = a.getdata();
    cout<<"Box A volume is : "<<volume<<endl;
}
