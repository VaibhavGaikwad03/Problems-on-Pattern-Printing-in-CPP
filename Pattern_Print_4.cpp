/*
Accept the number from the user and display below pattern

*   *   *   *   *   *
*   *               *
*       *           *
*           *       *
*               *   *
*   *   *   *   *   *


*/

#include<iostream>
using namespace std;

void PatternPrint(int iValue)
{
    int i = 0, j = 0;

    for(i = 1; i <= iValue; i++)
    {
        for(j = 1; j <= iValue; j++)
        {
            if((i == 1) || (i == iValue) || (j == 1) || (j == iValue) || (i == j))
            {
                cout<<"*\t";
            }
            else
            {
                cout<<" \t";    
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