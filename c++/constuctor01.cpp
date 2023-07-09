#include <iostream>
using namespace std;
class result
{
    int m, s, e, total, per;

public:
    result()
    {
        cout << "Maths :";
        cin >> m;
        cout << "Science :";
        cin >> s;
        cout << "English :";
        cin >> e;
        total = (float)(m + s + e);
        per = total / 3;
    }
    void getdata()
    {
        cout << "\nTotal : " << total << endl;
        cout << "Percentage : " << per << endl;
    }
};
int main()
{
    result a;
    a.getdata();
}