//     multilevel inheritance....

#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setbase()
    {
        cout<<"Enter A : ";
        cin>>a;
    }
    void getbase()
    {
        cout<<"Value of A is : "<< a << endl;
    }
};
class derived : public base
{
    protected:
    int b;
    public:
    void setderived()
    {
        cout<<"Enter B : ";
        cin>>b;
    }
    void getderived()
    {
        cout<<"Value of B is : "<<b<<endl;
    }
};
class abc :public derived
{
    protected:
    int c;
    public:
    void setabc()
    {
        cout<<"Enter C : ";
        cin>>c;
    }
    void getabc()
    {
        cout<<"Value of C is : "<<c<<endl;
    }
    void addition()
    {
        cout<<"Total of A ,b And C is : "<<a+b+c<<endl;
    }
};
int main()
{
    abc z;
    z.setbase();
    z.setderived();
    z.setabc();

    z.getbase();
    z.getderived();
    z.getabc();
    z.addition();
}
