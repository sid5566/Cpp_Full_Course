#include <iostream> //COSTRUCTOR OVERLOADING
using namespace std;
class Overloading
{ int a,b,c;
    float d;
    public:
    Overloading(int x,float z);
    Overloading(int ,int);
    Overloading(int,int ,int );

    void getdata(void);
};
Overloading::Overloading(int x,float z)
{
    a=x;
    d=z;
    cout<<"this is a"<<a<<"  "<<d;
}

 Overloading::Overloading(int x,int y)
{
    a=x;
    b=y;
    cout<<"this is a"<<a<<"  "<<b;
}

Overloading::Overloading(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
    cout<<"this is a"<<a<<"   "<<b<<"    "<<c;
}

void Overloading::getdata(void)
{
    cout<<a  <<"   "<<b;
}
int main()
{
    int a=2;
    float  b=2.2;
    Overloading c1 (a,b);

return 0;
}