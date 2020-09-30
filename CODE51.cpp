#include<iostream>
using namespace std;
template<class I = float>
class abe
{
 public:
    int a;
    I b;
    abe()
    {
        a=5;
        b = 6.1;
    }
    void getdata(void)
    {
        I c = I(a) + b;
        cout<<"this is yor data"<<c<<endl;
    }
};
int main()
{
    abe <> ada;
    ada.getdata();
return 0;
}