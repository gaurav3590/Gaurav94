// object as array

#include <iostream>
using namespace std;
class student
{
    int m, s, e;
    float total, per;

public:
    void setdata()
    {
        cout << "Enter Maths Marks : ";
        cin >> m;
        cout << "Enter Science Marks : ";
        cin >> s;
        cout << "Enter English Marks : ";
        cin >> e;
    }
    void calc()
    {
        total = (float)(m + s + e);
        per = total / 3;
    }
    void getdata()
    {
        calc();
        cout << "Maths : " << m << endl;
        cout << "Science : " << s << endl;
        cout << "English : " << e << endl;
        cout << "Total : " << total << endl;
        cout << "Percentage : " << per << endl;
    }
};
int main()
{
    student s[5];
    int i;
    for (i = 0; i < 2; i++)
    {
        cout << "Enter Students Details : " << i + 1 << endl;
        s[i].setdata();
        cout << endl;
    }
    for (i = 0; i < 2; i++)
    {
        cout << "Result of Student : " << i + 1 << endl;
        s[i].getdata();
        cout << endl;
    }
}
