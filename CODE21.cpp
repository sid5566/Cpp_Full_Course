#include <iostream>         //LEARN CONSTRUCTOR
using namespace std;
class Constructor
{
    int a,b;
    public:
                        void Getdata(void)
                        {
                            cout<<"this is your a  "<<a<<endl<<"this is your b  "<<b<<endl;
                        }
Constructor(int ,int );  //THE NAME OF CLASS AND THE NAME OF CONSTRUCTOR WILL BE SAME ALWAYS
};

Constructor::Constructor(int x,int y)  //DECLARE THE CONSTRUCTOR BY SCOPE RESOLUTION LIKE FUNCTION CALL
{                   
        a=x;
        b=y;
}

int main()
{
    Constructor a1(1,2);
    a1.Getdata();
    Constructor b1= Constructor (1,2);
    b1.Getdata();
}
// Constructor::Constructor(int x,int y)
//       ^            ^       ^     ^
//  Constructor      a1     ( 1   , 2);