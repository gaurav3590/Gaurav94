#include <iostream>
using namespace std;
class emlpoyee
{
protected:
    int index;
    string name;

public:
    emlpoyee()
    {
        cout<<endl<<"Welcome To Employee's Information Table "<<endl;
        cout<<"----------------------------------------"<<endl;
    }
    int entredata()
    {
        cout << "Employee Index : ";
        cin >> index;
        cout << "Employee Name : ";
        cin >> name;
    }

    void getdata()
    {
        cout << endl << "Employee Index : " << index << endl;
        cout << "Employee Name : " << name << endl;
    }
};

class salary : public emlpoyee
{
    float basic, da, hra, gross_salary;

public:
    void putdata()
    {
        cout << "Enter Employee Salary : ";
        cin >> basic;

        if (basic <= 5000)
        {
            da = (basic * 8) / 100;
            hra = (basic * 15) / 100;
        }
        else if (5000 < basic && basic <= 10000)
        {
            da = (basic * 12) / 100;
            hra = (basic * 18) / 100;
        }
        else if (10000 < basic && basic <= 15000)
        {
            da = (basic * 15) / 100;
            hra = (basic * 20) / 100;
        }
        else if (basic > 15000)
        {
            da = (basic * 17) / 100;
            hra = (basic * 22) / 100;
        }
        gross_salary = basic + da + hra;
    }
    void outdata()
    {
        cout << "Employee Salary : " << basic << endl;
        cout << "Gross salary of employee: " << gross_salary;
    }
};

int main()
{
    salary a;
    a.entredata();
    a.putdata();
    a.getdata();
    a.outdata();
}