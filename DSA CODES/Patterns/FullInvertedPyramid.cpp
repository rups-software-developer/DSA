// * * * * * * * -row 0 -
//  * * * * * *   -row 1
//    * * * *     -row 2
//     * * *      -row 3
//      * *        -row4
//       *         -row 5


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row= 0; row < n; row++)
    {
        for(int i = 0; i<row; i++)
        {
            cout<<" ";
        }

        for(int j = 0; j< n- row; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}