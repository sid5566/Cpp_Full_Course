#include<iostream>
using namespace std;

void moneycl (int money)
{
    int i;
    for (i = 0; i <=3; i++)
    {
    static float per=1.1;
        cout<<i<<".return after 10 year = "<<money*per<<endl;
    per=per*1.1; 
    }
    
}
int main() 
{
   int money;
   cout<<"enter money";
   cin>>money;
   moneycl(money);
return 0;
}