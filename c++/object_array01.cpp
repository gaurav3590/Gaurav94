#include<iostream>
using namespace std;
class bill
{
    int rate,qty,amt,dis,bill_amt,gst,netbill;
    char name[50];
    public:
    void setdata()
    {
        cout<<"Product Name : ";
        cin>>name;
        cout<<"Enter Quntity : ";
        cin>>qty;
        cout<<"Enter Rate : ";
        cin>>rate;
    }
    void calc()
    {
        amt = qty * rate;
        dis = (amt * 5) /100;
        bill_amt = amt - dis;
        gst = (bill_amt * 18) / 100;
        netbill = bill_amt + gst;
    }
    void getdata()
    {
        calc();
        cout<<"Amount : "<<amt<<endl;
        cout<<"Discount : "<<dis<<endl;
        cout<<"Bill Amount : "<<bill_amt<<endl;
        cout<<"Gst : "<<gst<<endl;
        cout<<"Net Bill : "<<netbill<<endl;
    }
};
int main()
{
    bill b[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"Enter Prodect Details : "<<i+1<<endl;
        b[i].setdata();
        cout<<endl;
    }
    for(i=0;i<2;i++)
    {
        cout<<"Details Of Prodect : "<<i+1<<endl;
        b[i].getdata();
        cout<<endl;
    }
}