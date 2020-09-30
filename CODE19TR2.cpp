#include <iostream>
using namespace std;
class object2;  //FORWARD DICLERATION OFF CLASS 
class object1
                        {
                        private:
                        int obb1;  //CREATION OBBJECT INDIVIUSAL
                        public:
                            void Setdata();  //FUNCTION PROTOTYPE
                            friend void Getdata(object1 , object2);  //FRIEND
                        };

                        void object1::Setdata(void)  //<-----FUNCTION
                        {
                            cout<<"enter a number"<<endl;
                            cin>>obb1;
                        }

class object2  //<<--CLASS 2
{
private:
    /* data */
    int obb2;
public:
    void Setdata();
    friend void Getdata(object1 , object2);
};


void object2::Setdata(void)
{
    cout<<"enter a number"<<endl;
    cin>>obb2;
}

void Getdata(object1 o1, object2 o2)  //<<--------THIS IS FRIEND FUNCTION WE NEED TO SETUP OBJECT IN ( PARANTHISIS )  WITH CLASS AND CALL OBJECT BY DATA
{
    cout<<"this is your data  :: "<<o1.obb1+o2.obb2<<endl;
}

int main()
{
    object1 obb1;
    object2 obb2;
    obb1.Setdata();
    obb2.Setdata();
    Getdata(obb1 , obb2);

return 0;
}