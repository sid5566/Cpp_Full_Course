#include<iostream> // LEARN TEMPLATE
using namespace std;
template<class p>
class temp
{
     p a,b;
    public:
        void setdata(p aa,p bb)
        {
            a=aa;
            b=bb;
        }
        void getdata(void)
        {
            cout<<"this is your p "<<new p<<endl;
            cout<<a<<endl;
            cout<<"this is your p "<<new p<<endl;
            cout<<b<<endl;
        }
};
int main()
{
    temp<int>a1;
    a1.setdata(4,5);
    a1.getdata();

return 0;
}