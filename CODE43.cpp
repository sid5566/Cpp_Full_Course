#include <iostream>  //LEARNING VIRTUAL FUNCTION
using namespace std;
class Base
{
public:
    int enter_add_data;
    int basa_data = 5;
     virtual void Getdata(void)  //
    {
        cout << "this is your data Base class " << basa_data << endl;
    }
};
class Derived : public Base
{
    int Derived_data = 10;

public:
    void Getdata(void)
    {
        cout << "this is your data Publicly inheritetad  " << basa_data << endl;
        cout << "this is your data  derived class  " << Derived_data << endl;
    }
};
int main()
{
    // Derived* pointer_Derived_1;
    // pointer_Derived_1->Getdata();
    Base *pointer_Base_1, o1;
    Derived obj_derived;
    pointer_Base_1 = &obj_derived;  // WE POINT BASE CLASS POINTER TO DERIVE CLASS OBJECT BUT IT WILL CALL BASE CLASS FUNCTION BUT IF WE WRITE VIRTUAL ON BASE CLASS FUNCTIONS SO WE WILL ABLE TO INVOKE THAT POINTED CLASS OBJECT
    pointer_Base_1->Getdata();
    // o1.enter_add_data = 3;
    // o1.Getdata();
    return 0;
}