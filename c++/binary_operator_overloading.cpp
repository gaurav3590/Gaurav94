//  BINARY OPERATOR OVERLOADING.....

#include <iostream>
using namespace std;
class box
{
    int l, w, h;

public:
    void setdata(int, int, int);
    int getdata()
    {
        return l * w * h;
    }
    box operator-(box &n)
    {
        box t;
        t.l = l - n.l;
        t.w = w - n.w;
        t.h = h - n.h;
        return t;
    }
};
void box ::setdata(int len, int wid, int hei)
{
    l = len;
    w = wid;
    h = hei;
}
int main()
{
    box a, b, c;
    int volume = 0;
    a.setdata(8, 8, 8);
    volume = a.getdata();
    cout << "box A volume is : " << volume << endl;
    b.setdata(4, 4, 4);
    volume = b.getdata();
    cout << "box B volume is : " << volume << endl;

    c = a - b;
    volume = c.getdata();
    cout << "box C volume is : " << volume << endl;
}