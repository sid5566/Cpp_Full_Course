#include <iostream>  // INITHILITION OF  CONSTRUCTOR WITH OBJECT
using namespace std;
class Simple
{
    int a, b;
    static int d;

public:
    Simple(int c, int d)
    {
        a = c;
        b = d;
    }
    void getdata(void)
    {
        cout << "this is your count " << d << endl
             << endl;
        d++;
        cout << "this is your data a " << a << endl;
        cout << "this is your data b " << b << endl
             << endl;
    }
};
int Simple::d = 1;

int main()
{
    Simple a1(1, 2), b1(3, 4), c1(5, 6);  // WE CAN CONSTRUCT ALL OBJECT IN A ROW 
    a1.getdata(); // AND CLASS FUNCTION LIKE THAT
    b1.getdata();
    c1.getdata();
    return 0;
}