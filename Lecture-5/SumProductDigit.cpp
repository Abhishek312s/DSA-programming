#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, product = 1;
    cout << "Enter a number :";
    cin >> n;

    while (n > 0)
    {
        sum += (n % 10);
        product *= (n % 10);
        n = n / 10;
    }

    cout << product - sum << endl;
    return 0;
}