#include <iostream>// LEARNING "THIS" KEYWORD
using namespace std;
class qqww
{
    int a;

public:
    void Setdata(int a)
    {
        this->a = a;  // THIS IS A POINTER MEANS WE CAN USE SAME NAME OF  DATA TYPE
    }
    void Getdata(void)
    {
        cout << "this is your data    " << a << endl;
    }
};
int main()
{
    qqww a1;
    a1.Setdata(5);
    a1.Getdata();
    return 0;
}