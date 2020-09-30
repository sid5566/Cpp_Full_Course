#include<iostream> //LEARNINT KEYWORD "NEW" , "DELETE"
using namespace std;
int main()
{   //  ▼ this int need  "*"       // IN NEW INT KEYWORD THEY  DOSE NOT CONTAIN A CONTAINER.
    int* p = new int(4);       // IT WILL BE STORE IN POINTER 
    cout<<"this is your new int *p is"<<*(p)<<endl;
    int* array = new int [4];
    cin>>array[0];
    cin>>*(array + 1);
    cin>>array[2];
    cin>>array[3];
        delete array;
    cout<<array[0]<<"\t";
    cout<<array[1]<<"\t";
    cout<<array[2]<<"\t";
    cout<<array[3]<<"\t";

    

return 0;
}