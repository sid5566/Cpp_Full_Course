#include <iostream>
using namespace std;
class Base
{
protected:
    int a, b;
};
class Derived : public Base
{
    public:
     Derived(int c,int d)
     {
         a=c;
         b=d;
     }
     Derived(Derived &obb1, Derived &obb2);
};
Derived::Derived(Derived &obb1, Derived &obb2)
{
    a = obb1.a + obb2.a;
    b = obb1.b + obb2.b;
cout<<"this is your data "<<a<<"  and   "<<b<<endl;
     
}
int main()
{
    Derived a1(1,2);
    Derived b1(1,2);
    Derived z1(a1,b1);
    

    return 0;
}