#include <iostream> //COSTRUCTOR OVERLOADING
using namespace std;
class Overloading
{ int a,b,c;
    float d;
    public:
    Overloading(){};
    // Overloading(int ,int);
    Overloading(int x,float z);
    Overloading(int,int ,int );

    //void getdata(void);
};
Overloading::Overloading(int x,float z)
{
    a=x;
    c=z;
    cout<<"this is a"<<a<<"  "<<c;
}

//  Overloading::Overloading(int x,int y)
// {
//     a=x;
//     b=y;
//     cout<<"this is a"<<a<<"  "<<b;
// }

Overloading::Overloading(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
    cout<<"this is a"<<a<<"   "<<b<<"    "<<c;
}

// void Overloading::getdata(void)
// {
//     cout<<a  <<"   "<<b;
// }
int main()
{
    Overloading c1 ( 2, 2.2);

return 0;
}