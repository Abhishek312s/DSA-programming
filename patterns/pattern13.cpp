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
            cout<< (char)('A'+col+row-2)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}