#include<iostream>   //MAKING CONSTRUCTOR IN DERIVED CLASS
using namespace std;
class Base1
{
    int Data1;
    public:
    Base1(int a)
    {
        Data1=a;
         cout<<"this is me Base1 constructor......"<<endl;
    }
    void Getdata1(void)
    {
        cout <<"Base 1 this is your data  "<<Data1<<endl;
    }
};
class Base2
{
    int Data2;
    public:
    Base2(int a)
    {
        Data2=a;
        cout<<"this is me virtual base constructor......"<<endl;
    }
    void Getdata2(void)
    {
        cout <<"Base2 this is your data  "<<Data2<<endl;
    }
};
class Derived : public Base1,virtual public Base2
{
    int derived;
    public:
    Derived(int a, int b,int c);
    void GetdataDerived(void);
};
void Derived ::GetdataDerived(void)
{
    cout<<"this is your data of Derived int "<< derived;
}

 Derived:: Derived(int a, int b,int c): Base1(a), Base2(b)
{
        derived = c;
        cout<<"this is me Derived class constructor......"<<endl;
}
int main()
{
    Derived a1(1,2,3);
    a1.Getdata1();
    a1.Getdata2();
    a1.GetdataDerived();
return 0;
}