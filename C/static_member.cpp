#include <iostream>
#include <string.h>
using namespace std;
class bank
{
    int bal,acc;
    string name;
    public:

    bank (string name ,int bal,int acc)
    {
        this->name=name;
        this->bal=bal;
        this->acc=acc;
    }
    void getdata()
    {
        cout<<"your name is "<<name<<endl;
         cout<<"your acc no "<<acc<<endl;
          cout<<"your balance is "<<bal<<endl;
    }
};

int main();
{
    bank x("OM" ,50000,101);
    x.getdata;
}