#include <iostream> // LEARNING POINTER AND ITS TYPE
using namespace std;
class Simple
{
    int a, b;

public:
    void Setdata(void)
    {
        cout << "enter a data 1 ::" << endl;
        cin >> a;
        cout << "enter a data 2 ::" << endl;
        cin >> b;
    }
    void getdata(void)
    {
        cout << "this is your data a " << a << endl;
        cout << "this is your data b " << b << endl;
    }
};
int main()
{
    Simple a1;
    a1.Setdata();
    a1.getdata();
    Simple *point = new Simple;
    (*point).Setdata();  //WE CAN USE POINTER LIKE THIS OR
    point->getdata(); // THAT
    return 0;
}