#include<iostream>
using namespace std;

int main(){
    int row=1,col,n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout<<endl;
    
    while (row<=n)
    {
        col=1;
        while (col<=row)
        {
            cout<< (char)('A'+(n-1)-row+col)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}