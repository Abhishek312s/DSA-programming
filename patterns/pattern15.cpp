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
        col=1;
        while (row<=n-1)
        {
            cout << " ";
            n--;
        }
        col=1;
        while (col <= row)
        {

            cout << "*";
            col++;
        }
        cout<<endl;
        row++;
    }
}
