#include <iostream>
using namespace std;
class simple;
class Complex
{
private:
    /* data */
    int a;
public:
    void getdata(int x)
    {
        a=x;
    }
    friend int addata(Complex, simple);
};

class simple
{
private:
    int b;
public:
  void getdata(int x)
  {
      b=x;
  }
  friend int addata(Complex ,simple );
};

int  addata(Complex c1,simple c2)
{
    cout<<"this is your data"<<endl;
    return c1.a+c2.b;
}

int main()
{
    Complex c1;
    simple c2;
    c1.getdata(1);
    c2.getdata(4);
   cout<<addata(c1,c2);
return 0;
}