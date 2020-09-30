#include <iostream>
using namespace std;
class Simple
{
    int Price, id;

public:
    void Setdata(int a, int b)
    {
        Price = a;
        id = b;
    }
    void GEtdata(void)
    {
        cout << "this is your Price" << Price << endl;
        cout << "this is your id" << id << endl;
    }
};
int main()
{
    Simple a1;

    return 0;
}