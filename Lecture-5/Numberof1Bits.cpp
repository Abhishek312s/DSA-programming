#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    unsigned n;
    cout << "Enter a number :";
    cin >> n;

    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;

    return 0;
}