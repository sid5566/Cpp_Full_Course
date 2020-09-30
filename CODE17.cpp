#include <iostream>
using namespace std;
class NumCOUNT        //LEARNING STATIC DATA MEMBER AND MEMNER FUNCTION
{
private:
    /* data */
    int Id;
    static int count;

public:
    void setID(void);  //THIS IS PROTOTYPE IF FUNCTION
    void getID(void);

    static void Gc(void)   //STATIC VOID RUN FROM NOT 0 BUT 1
    {
        cout << "\n *************************print count    " << count << endl;
    }
};

void NumCOUNT::setID(void)
{
    cout << "enter your id "<<endl;
    cin >> Id;
}
void NumCOUNT::getID(void)// THIS IS FUNCTION
{
    cout << "This is your ID " << Id << "  and your count    " << count + 1 << endl; //FUNCTION OF VOID STATIC START FROM 0 WE NEED TO INCREMENT THAT TO ADD +1
    count++;   //THIS IS RUN IN ALL FUNCTION YES WE NEED TO WRITE INCREMEMT ONLY IN ONE FUNCTION THIS IS RUN IN ALL OBJECT AND FUNCTION
}

int NumCOUNT::count;   /*WE CANNOT WIRTE STATIC DATA DIRECTLY IN FUNCTION WE
                        NEED TO MAKE A FUNTION TO FOR THIS*/

int main()

{
    NumCOUNT num, num1;   // NUM 1 AND NUM 2 IS OBJECT 
    
    num.setID();  //WE ARE CALLING FUNCTION NY OBJECT 
    num.getID();
    NumCOUNT::Gc(); //WE ARE CALLING FUNCTON DIRECTLY NOT FROM OBJECT

    num.setID();
    num.getID();
    NumCOUNT::Gc();   // YES WE CAN WRITE num.Gc(); AND AND THIS TOO
      
    cout << "\n****************your are writing code for num1****************\n";

    num1.setID();
    num1.getID();
    NumCOUNT::Gc();

    num1.setID();
    num1.getID();
    NumCOUNT::Gc();

    return 0;
}