#include <iostream> //SIMPLE interest CALLULATOR  USING CONSTRUCTOR AND FUNCTION
using namespace std;
class SimpleI
{
    int money, years;                   //DATA MEMBERS
    float get, Interset, Return, km;

public:
    SimpleI(int, int, int);     //CONSTRUCTOR PROTOTYPE 
    void getdata();             //FUNCTION PROTOTYPE 
};

SimpleI::SimpleI(int Ma, int Ic, int YY)    //CONSTRUCTOR 
{
    money = Ma;
    Interset = float(Ic) / 100;
    years = YY;
    for (size_t i = 0; i < YY; i++)
    {
        km = (1 + Interset);
        Return = money * km;
    }
}
void SimpleI::getdata()
{
    for (int i = 0; i < years; i++)
    {
        static float ii = Return;
        cout << i << ".  year your money " << ii << endl;
        ii = ii * km;
    }
}

int main()
{
    int r, i, y;
    cout << "enter money: : " << endl;
    cin >> r;
    cout << "expected interest  : : " << endl;
    cin >> i;
    cout << "expected years  : : " << endl;
    cin >> y;

    SimpleI a1(r, i, y);
    a1.getdata();
    return 0;
}