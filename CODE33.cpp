#include <iostream>
#include <cmath>
using namespace std;
class SimpleCal
{
public:
    int a, b;
    char c;
    void Getdata(void)
    {
        cout << "enter first number::" << endl;
        cin >> a;
        cout << "enter char ::" << endl;
        cin >> c;
        cout << "enter second number::" << endl;
        cin >> b;
    }

    void Swi(void)
    {
        switch (c)
        {
        case ('+'):
            cout << "this is your data   " << a + b << endl;
            break;
        case ('-'):
            cout << "this is your data   " << a - b << endl;
            break;
        case ('*'):
            cout << "this is your data   " << a * b << endl;
            break;
        case ('/'):
            cout << "this is your data   " << a / b << endl;
            break;
        default:
            cout << "please enter valid char";
            break;
        }
    }
};
class Advacal : virtual public SimpleCal
{
public:
    void AdFun(void)
    {
        if (c == '%')
        {
            int g = a * b / 100;
            cout << "this is your data   " << g << endl;
        }

        else if (c == '^')
        {
            for (int i = 1; i <=b; i++)
            {
                static int Updater = a;
                cout<<i<<". this is your power answer "<<b<<"="<<Updater<<endl;
                Updater = Updater * a;
            }
        }
        // else
        // {
        //     cout<<"enter a valid char "<<endl;
        // }
        
       
    }
};
class Hybri : virtual public Advacal , virtual public SimpleCal
{
    public:
};
int main()
{
    Hybri z1;
    z1.Getdata();
    z1.Swi();
    z1.AdFun();
    return 0;
}