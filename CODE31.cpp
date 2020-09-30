#include <iostream>
using namespace std;
class Base
{
    protected:
    int a;
};
class Derived : public Base
{
    public:
    void Setdata(void)
    {
        cout<<"enter a data"<<endl;
        cin>>a;
    }
};
class Derived1 : public Derived
{
    public:
    void getdata(void)
    {
        cout<<"this is your data a  ::   "<<a<<endl;
    }

};
int main()
{
    Derived1  obb1;
    obb1.Setdata();
    obb1.getdata();

return 0;
}