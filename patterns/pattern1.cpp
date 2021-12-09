#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please Enter a Number" << endl;
    cin >> n;
    int row=1,col;

    while (row<=n)
    {
        col=1;
        while (col<=n)
        {
            cout<<"*";
            col=col+1;
        }
        cout<<"\n";
        row=row+1;
        
    }
    
    return 0;
}