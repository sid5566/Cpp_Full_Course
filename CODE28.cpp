#include <iostream> // LEARN INHERITANCE
using namespace std;
class Baseclass
{
private:
    int a = 10;     //   UNDERLINE THAT NOT EFFECT ON PRIVATE MEMBER ON VISIBLITY MODE 
                    //PRIVATE MEMBER DIDNT INHERATE NOT BY FUNCTION OR NOT BU COUT
public:
    int b = 20;   // PUBLIC ARE PRIVATE IF   <---------VISIBLITY MODE IS PRIVATE  
                  // PUBLIC ARE PUBLIC IF   <---------VISIBLITY MODE IS PUBLIC 
};

       class Derivclass :            public             Baseclass
     //         ^                    ^                      ^
      //   name of class         visiblity mode         base class name
{
public:

int f;       //<------------------------- THIS IS PUBLIC MEMBER OF DERIVE CLASS
    //  void getdataa()
    // {
    //     cout<<"this is a"<<a;
    // }
// Derivclass(){}
    Derivclass()  //<-----------------THIS IS CONSTRUCTOR 
    {
        f = 55;
        b= 66;
    }
    void getdatab(void)  // <---------------
    {
        cout << "this is b" << b;
    }
};

int main()
{
    Derivclass a1;    //CONSTRUCTOR CALL
    cout<<a1.f;
    cout<<a1.b;

    return 0;
}