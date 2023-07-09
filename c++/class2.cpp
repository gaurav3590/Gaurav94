#include <iostream>
using namespace std;
class calc
{
public:
  int a, b;
  void setdata()
  {
    cout << "\nEnter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
  }
  void Add()
  {
    int c = a + b;
    cout << "\nAdition is :" << c << endl;
  }
  void sub()
  {
    int c = a - b;
    cout << "Substraction is :" << c << endl;
  }
  void multi()
  {
    int c = a * b;
    cout << "Multiplication is :" << c << endl;
  }
  void div()
  {
    int c = a / b;
    cout << "Division is :" << c << endl;
  }
};
int main()
{
  calc x;
  x.setdata();
  x.Add();
  x.sub();
  x.multi();
  x.div();
  return 0;
}