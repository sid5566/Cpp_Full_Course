
#include <iostream>
using namespace std;
/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/
class Base
{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
};

class Derived : protected Base
{
    public:
    void getdata(void)
    {
        cout<<b;
    }
};
int main()
{
    Derived d;
    d. getdata();
    return 0;
}