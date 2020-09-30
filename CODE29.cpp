#include <iostream> //SINGLE INHERITANCE WITH PRIVATE MEMBER
using namespace std;//https://www.youtube.com/watch?v=S1BR0xDdsyM&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=39&t=1280
class Base
{
    int a = 2;

public:
    int setdata(void)
    {
        return a;
    }
};
class derive : public Base
{
    int b = 3;

public:
    int getdata(void)
    {
        return b * setdata();
    }
    void thisdata(void)
    {
        cout << "this is your data" << endl;
        cout << getdata();
    }
};
int main()
{
    derive a1;
    cout << a1.getdata()<<endl;
    return 0;              // system("pause");
}