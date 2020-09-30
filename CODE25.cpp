#include <iostream> //LEARN COPY CONSTRUCTOR
using namespace std;
class Const
{

    int a;
    int b;

public:
    Const()   //<-----------DEFAULT CONSTRUCTOR  for a1
    {
        a = 1;
        b = 2;
        
    }

    Const(int num,int num_2)      //<-------CONSTRUCTOR OVER LOADING for b1
    {
        a = num;
        b = num_2;
    }

    Const(Const &obj)   //<-----------COPY CONSTRUCTOR for c1
    {
        a = obj.a;
        b= obj.b;
    }
    void Getdata(void)  //<------A FUNCTION IN WHICH WE WE ADD OTHER OBJECT DATA TO TO OTHER OBJECT
    {
        cout << "this is your " << a<<endl;
        cout << "this is your " << b<<endl;
    }
};

int main()
{
    Const a1, b1(23,24);
    cout << "this is a1" << endl;
    a1.Getdata();
    cout << endl;
    cout << "this is b1" << endl;
    b1.Getdata();
    cout << endl;
    cout << "this is c1" << endl;
    Const c1(b1);
    c1.Getdata();

    return 0;
}