#include <iostream>
#include <string.h>
using namespace std;
class student
{
protected:
    int rln;
    string name;

public:
    int entredata()
    {
        cout << endl
             << "Enetr Roll no. : ";
        cin >> rln;
        cout << "Enter Name : ";
        cin >> name;
    }
    void getdata()
    {
        cout << "Roll no. : " << rln << endl;
        cout << "Name : " << name << endl;
    }
};
class result : public student
{
    int m, s, e, per, total;

public:
    void setdata()
    {
        cout << "Enter Maths : ";
        cin >> m;
        cout << "Enter Science : ";
        cin >> s;
        cout << "Enter English : ";
        cin >> e;
    }
    void printmarks()
    {
        cout << "Maths : " << m << endl;
        cout << "Science : " << s << endl;
        cout << "English : " << e << endl;
    }
    void processeing()
    {
        total = m + s + e;
        per = (float)total / 3;
        cout << "Total : " << total << endl;
        cout << "Percentage : " << per << endl;
        if (per < 35 || m < 35 || s < 35 || e < 35)
        {
            printf("FAIL");
            cout << "Sorry, Better Luck Next Time.." << endl;
        }
        else
        {
            if (per >= 80)
            {
                cout << "Garde : A" << endl;
            }
            else if (per >= 60 && per < 80)
            {
                cout << "Garde : B" << endl;
            }
            else if (per >= 40 && per < 60)
            {
                cout << "Garde : C" << endl;
            }
            else if (per >= 35 && per < 40)
            {
                cout << "Grade : D" << endl;
            }
            cout << "Congratulation..." << endl;
        }
    }
};

int main()
{
    result a;
    a.entredata();
    a.setdata();
    a.getdata();
    a.printmarks();
    a.processeing();
}
