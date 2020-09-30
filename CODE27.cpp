#include <iostream> // LEARN DISTRUCTOR
using namespace std;  
class Const   
{
    public:

    Const()    // THIS IS CONATRUCTOR
    {
        cout<<"this is  constructor"<<endl;
    }

    ~Const()      // THIS IS DISTRUCTOR 
    {
        cout<<"this is  distructor"<<endl;
    }
    void getdata()    //A FUNCTION
    {
        cout<<"this is your data"<<endl;
    }
};

int main()
{
    Const qq;
    {
        cout<<"this is a block"<<endl;
        Const a1;
    }
    return 0;
}