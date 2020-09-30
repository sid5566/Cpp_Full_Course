#include <iostream>
using namespace std;  //LEARN FRIEND FUNCTION
class complex
{
private:
    int a;
    int b;
public:
   void getdata(void);
   friend void setdata(complex);
};

void complex::getdata(void)
{
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"enter another number"<<endl;
    cin>>b;
}
        void setdata(complex set)
        {
            cout<<"print this nummber ::  "<<set.a+set.b;        
        }

int main()
{
    complex set;
    set.getdata();
    setdata(set);
return 0;
}