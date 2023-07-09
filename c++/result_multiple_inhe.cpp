#include <iostream>
#include <string>
using namespace std;
class Student1
{
protected:
    int roll;
    string name;

public:
    void setdata()
    {
        cout << "Enter student roll number:";
        cin >> roll;
        cout << "Enter student name:";
        cin >> name;
    }
    void getdata()
    {
        cout << "The student roll number:" << roll << endl;
        cout << "The student name:" << name << endl;
    }
};
class Student2
{
protected:
    int Maths, Sci, English, total, per;

public:
    void marks()
    {
        // setdata();
        cout << "Enter the Maths Marks:";
        cin >> Maths;
        cout << "Enter the Science Marks:";
        cin >> Sci;
        cout << "Enter the English Marks:";
        cin >> English;
    }
    void details()
    {
        // getdata();
        cout << "Maths:" << Maths << endl;
        cout << "Science:" << Sci << endl;
        cout << "English:" << English << endl;
    }
};
class result : public Student1, public Student2
{
public:
    result()
    {
        cout << "Welcome to the Student Information System" << endl;
        cout << "*****************************************" << endl;
    }
    void calculate()
    {
        setdata();
        marks();
        total = (Maths + Sci + English);
        per = (Maths + Sci + English) / 3;
        getdata();
        details();
        cout << "Total: " << total << endl;
        cout << "Percentage:" << per << endl;
        if (per < 35 || Maths < 35 || Sci < 35 || English < 35)
        {
            cout << "Fail" << endl;
            cout << "Sorry...Better Luck Next Time" << endl;
        }
        else
        {
            if (per >= 85)
                cout << "Grade A" << endl;
            else if (per >= 60)
                cout << "Grade B" << endl;
            else if (per >= 50)
                cout << "Grade C" << endl;
            else if (per >= 35)
                cout << "Grade D" << endl;
            cout << "Congratulation........." << endl;
        }
    }
};

int main()
{
    result a;
    a.calculate();
}