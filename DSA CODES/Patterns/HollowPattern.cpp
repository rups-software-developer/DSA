#include <iostream>
using namespace std;
// * * * * *
// *       *
// * * * * *
void HollowPattern(int rowCount, int colCount)
{
    for (int row = 0; row < rowCount; row = row + 1)
    {
        // first row or last row -> print 5 *
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {

            cout << "* ";
            // spaces
            for (int i = 0; i < colCount - 2; i = i + 1)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter the First Number: ";
    cin >> iValue1;

    cout << "Enter the second Number: ";
    cin >> iValue2;

    HollowPattern(iValue1, iValue2);
}