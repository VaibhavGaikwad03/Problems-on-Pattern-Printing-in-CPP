/*
Accept the number from the user and display below pattern

*   *   *   *   *   *
*   #   #   #   *   *
*   #   #   *   $   *
*   #   *   $   $   *
*   *   $   $   $   *
*   *   *   *   *   *

*/

#include<iostream>
using namespace std;

void PatternPrint(int iValue)
{
    int i = 0, j = 0;

    for(i = 1; i <= iValue; i++)
    {
        for(j = iValue-1; j >= 0; j--)
        {
            if((i-1 == j) || (i == 1) || (i == iValue) || (j == iValue-1) || (j == 0))
            {
                cout<<"*\t";
            }
            else if(i-1 < j)
            {
                cout<<"#\t";
            }
            else if(i > j)
            {
                cout<<"$\t";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int iNo = 0; 

    cout<<"Enter the number : "<<endl;
    cin>>iNo;

    PatternPrint(iNo);

    return 0;
}