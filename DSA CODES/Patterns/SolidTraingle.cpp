#include<iostream>
using namespace std;
 // * * * * *
 // * * * * *
 // * * * * *
void solidTraingle(int iRow, int iCol)
{
    for(int i = 1; i<=iRow; i++)
    {
        for(int j = 1; j<= iCol; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the First Number: ";
    cin>>iValue1;

    cout<<"Enter the second Number: ";
    cin>>iValue2;

    solidTraingle(iValue1, iValue2);
}