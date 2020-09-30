#include <iostream>
using namespace std;
class Base2 
{ 
    public:
    int a;
    int Getdata1(int data)
    {
        a=data;
        return 0;
    }
};

class Base3 
{
    public:
    int b;
    int Getdata2(int data)
    {
        b=data;
        return 0;
    }
};

class Base4 : public Base2 , public Base3
{
    public:
   void getdata(void)
   {
       cout<<"this is your data   ::  :"<<a<<endl;
       cout<<"this is your data   ::  :"<<b<<endl;
       cout<<"this is your data   ::  :"<<a+b<<endl;

    }
    
};
int main()
{
    Base4 a1;
    a1.Getdata1(2);
    a1.Getdata2(4);
    a1.getdata();
return 0;
}