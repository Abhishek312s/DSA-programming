#include <iostream>
using namespace std;

int main()
{
    int row = 1, col, n, z=1;
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
            cout << z;
            z++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}