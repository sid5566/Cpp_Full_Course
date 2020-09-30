#include <iostream>  //SQUARE ROOT 
#include<math.h>
using namespace std;
class MakingPoint
{
    int a,b;
    public:
    MakingPoint(int x,int y)
    {
        a=x;
        b=y;
    }
            void getdata(void)
            {
                cout<<"this is your a  "<<a<<endl<<"this is your b  "<<b<<endl<<endl;
            }
        friend void FindPara( MakingPoint,MakingPoint);
};

void FindPara( MakingPoint p,MakingPoint q)
            {
              int r = (p.a-q.a);
              int o;
              o=r*r;
              int w = (p.b-q.b);
              int k;
              k=w*w;
            int v=o+k;
              cout<<"  this is your data  "<<r<<endl;
              cout<<"  this is your data  "<<w<<endl;
              cout<<"  this is your data  "<<v<<endl;
              cout<<"  this is your data  "<<sqrt(v)<<endl;

            }
int main()
{
    MakingPoint p(7,8);
    MakingPoint q(3,5);
    p.getdata();
    q.getdata();
    FindPara(p,q);
}


