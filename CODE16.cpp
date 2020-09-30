#include <iostream>
using namespace std;
class binary           //LEARN NESTING OF FUNCTION
{
private:
    p binaryR;                    //<----------THIS IS PRIVATE VARIable and FUNCTION
    void cheackinput(void);

public:
    p binary1;
    void inputb(void);
  //void cheackinput(void);
    void changeval(void);
};

void binary::inputb(void)
{
    cout << "enter a number" << endl;
    cin >> binary1;
}

void binary::cheackinput(void)
{
    if (binary1 != 1 && binary1 != 0)
    {
        /* code */
        cout << " your are wrong" << endl;
    }
    else
    {
        cout << "you are write" << endl;
    }

    binaryR = binary1;
}
void binary ::changeval()
{
    cheackinput();
    if (binary1 == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}
p main()
{
    binary getbval;
    getbval.inputb();
    // getbval.cheackinput();
    getbval.changeval();

    return 0;
}