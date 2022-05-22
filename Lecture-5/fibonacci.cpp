#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    int sum = a+b, n;
    cout << "Enter a number :";
    cin >> n;
    cout << a << " ";
    cout << b << " ";

    for (int i = 3; i <= n; i++)
    {
        cout << sum << " ";
        a = b;
        b = sum;
        sum=a+b;
    }
    return 0;
}