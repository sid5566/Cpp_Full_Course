#include <iostream>         //LEARN CONSTRUCTOR
using namespace std;
class Constructor
{
    int a,b;
    public:
    void Getdata(void)
    {
        cout<<"this is your a"<<a<<endl<<"this is your b"<<b<<endl;
    }
        Constructor(void);  //THE NAME OF CLASS AND THE NAME OF CONSTRUCTOR WILL BE SAME ALWAYS
};

Constructor::Constructor(void)  //DECLARE THE CONSTRUCTOR BY SCOPE RESOLUTION LIKE FUNCTION CALL
{
     a=10;
     b=20;
}
int main()
{
    Constructor obb,obb1;
    cout<<endl;
    obb.Getdata();
    cout<<endl;
    obb1.Getdata();
    cout<<endl;
    

return 0;
}