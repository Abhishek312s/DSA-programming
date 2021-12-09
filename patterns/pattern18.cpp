#include <iostream>
using namespace std;

int main()
{
    int row = 1, col, n, z;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;

    while (row <= n)
    {
        col = 1;
        while (col < row)
        {
            cout << " ";
            col++;
        }
        col = n;
        while (col >= row)
        {
            cout << z + row - 1;
            z++;
            col--;
        }
        cout << endl;
        row++;
    }
    return 0;
}