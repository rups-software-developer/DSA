#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row= 0; row<n; row++)
    {
        for(int i= 0; i<row+1; i++)
        {
            cout<<row+1;
            if(i!=row)
            {
                cout<<"*";
            }
        }

        cout<<endl;
    }

    for(int row= 0; row<n; row++)
    {
        for(int i= 0; i<n-row; i++)
        {
            cout<<n-row;
            if(i!=n-row-1)
            {
                cout<<"*";
            }
        }

        cout<<endl;
    }
}