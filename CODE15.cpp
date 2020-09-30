#include<iostream>
#include<string>
class binary
{
    string pp;
public:
   void setdata(void);
};
void binary::setdata(void)
{
    cout<<"enter a nummber";
    cin>>pp;
}
using namespace std;
int main()
{
 binary b;
 b.setdata();
return 0;
}