// find area and volume of circle shape using multiple..
// Exam of c++
// harshil gajipara

#include <iostream>
using namespace std;
class volume
{
    protected:
    float n, Volume;

public:
    void sdata()
    {
        cout << "Enter Radiation For volume of Circle : " << endl;
        cin >> n;
    }
    void gdata()
    {
        Volume = (4/3)*n*n*n;
        cout << "Volume Of Circle : " << Volume << endl;
    }
};
class area
{
protected:
    float r, Area;

public:
    void setdata()
    {
        cout << "Enter Redius For Area of Circle : " << endl;
        cin >> r;
    }
    void getdata()
    {
        Area = (3.14 * r * r);
        cout << "Area of Circle : " << Area << endl;
    }
};
class circle : public volume, public area
{
    
public:
    void data()
    {
        cout << "Area of Circle : " << Area << endl;

        cout << "Volume Of Circle : " << Volume << endl;
    }
};
int main()
{
    circle v;
    v.setdata();
    v.sdata();
    v.gdata();
    v.getdata();
    v.data();
}
