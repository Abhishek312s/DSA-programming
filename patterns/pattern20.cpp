#include <iostream>
using namespace std;

int main()
{
    int row = 1, col, n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;

    while (row <= n)
    {
        col = n;
        while (col > row)
        {
            cout << " ";
            col--;
        }
        col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        col=2;
         while (col<=row)
        {
            cout<<row-col+1;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}