#include<iostream>
using namespace std;           
                                                           //*******IF else statement with switch case***************//

int main()
{
    int age_voter;
    cout<<"enter your age for apply voter id card"<<endl;
    cin>>age_voter;

    int limt=18;

 if ((age_voter>limt) && (age_voter>5))
    {
        cout<<"you are eligable for voter id card"<<endl; 
    }
else if(age_voter==18)
        {
            cout<<"you are eligable for this but with temp"<<endl; ///////////&& in if or function in else if or mirror sing
        }
        else if(age_voter<5)
        {
            cout<<"your are too small"<<endl;
        }
else
            {
                cout<<"you are not eligable";
            } 
            int age_value;

           /* switch (age_value)
            {
            case 18:
            cout<<"yes you will come";
                break;
            case 2:
            cout<<
            default:
                break;
            } */

       
    return 0;
}