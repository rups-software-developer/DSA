#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row= 0; row<=n; row++)
    {
        for(int i = n-1; i>=row; i--)
        {
            cout<<" ";
        }

        for(int j = 0; j<=row; j++)
        {
            cout<<" * ";
        }

        cout<<endl;
    }

    

}