/*
Accept the rows and columns from the user and display below pattern

1   2   3   4
    1   2   3
        1   2
            1

*/

#include<iostream>
using namespace std;

void PatternPrint(int iRow, int iCol)
{
    int i = 0, j = 0, Pattern = 0;

    for(i = 1; i <= iRow; i++)
    {
        Pattern = 0;

        for(j = 1; j <= iCol; j++)
        {
            if(i <= j)
            {   Pattern++;
                cout<<Pattern<<"\t";
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
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter the number of rows : "<<endl;
    cin>>iNo1;

    cout<<"Enter the number of columns : "<<endl;
    cin>>iNo2;

    PatternPrint(iNo1, iNo2);

    return 0;
}