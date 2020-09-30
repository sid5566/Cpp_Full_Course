#include <iostream>
using namespace std;
class simple;
class complex
{
private:
    /* data */
    int a,b;
public:
  void Getdata(int q, int n)  
 {      
     a=q;
     b=n;
 }
   friend void sumdata(complex);
};
void sumdata(complex c1)

{
    cout<<"this is your data"<<c1.a+c1.b;
}

int main()
{ 
    complex c1;
    c1.Getdata(1,2);
    sumdata(c1);
return 0;
}