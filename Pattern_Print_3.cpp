/*
Accept the number from the user and display below pattern

$   *   *   *   *
#   $   *   *   *
#   #   $   *   *
#   #   #   $   *
#   #   #   #   $

*/

#include<iostream>
using namespace std;

void PatternPrint(int iValue)
{
    int i = 0, j = 0;

    for(i = 0; i < iValue; i++)
    {
        for(j = 0; j < iValue; j++)
        {
            if(i == j)
            {
                cout<<"$\t";
            }
            else if(i < j)
            {
                cout<<"*\t";
            }
            else if(i > j)
            {
                cout<<"#\t";
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