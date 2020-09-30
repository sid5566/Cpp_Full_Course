#include <iostream>
using namespace std;
class addition;
class object1
{
    private:
    int a,b;
    public:
    void setdata(void)
    {  
        cout<<"enter a data"<<endl;
        cin>>a;
        cout<<"enter a data"<<endl;
        cin>>b;
    }
    friend class addition;
};

class addition
{
    public:
    void getdata(object1 );
};

 void addition::getdata(object1 add)
    {
        cout<<"this is your data"<<add.a+add.b<<endl;
    }
int main()
{
    object1 add;
    add.setdata();
  addition o1;
   o1.getdata(add);
return 0;
}