#include<iostream> // INITILITION OF LIST CONSTRUCTOR
using namespace std;
class Base
{
    int b;
    int a;
    public:
    //Base(int d,int c): a(b+d),b(c)<-----------------IT WILL GIVE US ERROR 
    Base(int d,int c): a(c+d),b(c)
    {
        cout<<"this is your a is "<<a<<endl;
        cout<<"this is your a is "<<b<<endl;
    }
};
int main()
{
Base a1(1,3);
return 0;
}