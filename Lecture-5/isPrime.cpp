#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime=true;
    cout << "Enter a Number: ";
    cin >> n;
    cout << endl;

    for (int i = 2; i < n; i++)
    {
       if (n%i==0)
       {
           isPrime=false;
           break;
       }
       
    }
    if (isPrime)
    {
        cout<<"It is a prime number";
    }
    else{
        cout<<"It is not a prime number";
    }
    

    return 0;
}