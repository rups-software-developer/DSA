#include<iostream>
using namespace std;

int main()
{
    int factorialNum = 1;

    for(int i = 5; i>=1; i--)
    {
        factorialNum = factorialNum * i;
    }

    cout<<factorialNum;
}