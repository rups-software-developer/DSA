#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;

    for(int row = 1; row<=n; row++)
    {
        for(int col= 0; col<row; col++)
        {
            cout<<col+1;
        }

        cout<<endl;
    }
}