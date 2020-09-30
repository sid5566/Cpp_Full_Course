#include <iostream>
using namespace std;
class Comp
{
    int a, b;

public:
    Comp(int k,int n)
    {
        a=k;
        b=n;
    }
    void Getdata(void)
    {
        cout<<"this is your a and b    "<<a<<endl<<b;
    }
    friend void CompF(Comp , Comp );
};

void CompF(Comp a1, Comp b1)
{
    cout<<a1.a+b1.a;
}
int main()
{
    Comp a1(1,2),b1(2,3);
    a1.Getdata();
    CompF(a1,b1);
    return 0;
}