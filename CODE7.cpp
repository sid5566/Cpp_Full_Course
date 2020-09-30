#include<iostream>
using namespace std;

int main()
{
    // int array_1[] = {23, 45, 56, 89};
    // for (int i = 0; i<=3; i++)
    // {
    //     /* code */
    //     cout<<array_1[i]<<endl;
    // }
    
    // int numb[] = {2,4,6,8};
    // cout<<numb[1];

    // int match_w[4];
    // match_w[0]=1;
    // match_w[1]=45;
    // match_w[2]=6;
    // match_w[3]=5;

    // for (int  i = 0; i <=3; i++)
    // {
    //     /* code */
    //     match_w[1]=60;              //<---------YES WE CAN CHANGE THE ARRAY VALUE BY CODE
    //     cout<<match_w[i]<<endl;
    // }

//     int i=0;
                // int array_1[] = {23, 45, 56, 89};
//     do
//     {
//        cout<<array_1[i]<<endl;
//        i++; 
//     } while (i<=3);

    // int num;
    // int match_w[4];
    // match_w[0] = 1;
    // match_w[1] = 45;
    // match_w[2] = 6;
    // match_w[3] = 5;
    // do
    // {
    //     /* code */
    //     cout<<match_w[num]<<endl; 
    //     num++;
    // } while(num<=3);

// 
// int i=0;
// do
// {
//     /* code */
        // i++;                 
//     if (i%2)                         //<--------------IF YOU WANT TO RUN ALTERNATVE LOOP YOU NEED USE OF MODULUS '%' USING %2 AND %3 BUT NOT %1  
//     {
//         /* code */
//         cout<<i<<endl;
//     }
    
// } while (i<50);

        int array_1[] = {23, 45, 56, 89};
        int* array_p = array_1;
        cout<<*(array_p)<<endl;
        cout<<*(array_p+1)<<endl;
        cout<<*(array_p+2)<<endl;    //<---------------IF YOU USE POINTER WITHOUT BRACKET YOU CANTNOT PRINT POITNER ARRAY IN SERISE
        cout<<*(array_p+3)<<endl;




    

     //<----------------------Press any key to continue . . .  get by this code ------>system("pause");
    
return 0;
}