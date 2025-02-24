#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=0; row < n; row++)
    {
        //half pyramid
        for(int i=0; i< n-row; i++)
        {
            cout<<"*";
        }

        //full pyramid
        for(int j= 0; j< 2*row+1; j++)
        {
            cout<<" ";
        }

        //half pyramid
        for(int i=0; i< n-row; i++)
        {
            cout<<"*";
        }

        cout<<endl;

    }

    for(int row= 0; row<n; row++)
    {
        for(int i = 0; i<row+1; i++)
        {
            cout<<"*";
        }

        for(int i = 0; i<2*n-2*row-1; i++)
        {
            cout<<" ";
        }

        for(int i = 0; i<row+1; i++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}