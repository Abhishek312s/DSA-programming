#include<iostream>
using namespace std;

int main(){
    int row=1,col,n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<endl;

    while (row<=n)
    {
        col=1;
        while (col<=n-row+1)
        {
            cout<<col;
            col++;
        }
        col=1;
        while (col<=(row-1)*2)
        {   
            
            cout<<"*";
            col=col+1;
        }
        
        col=n;
        while (col>=row)
        {
            cout<<col-row+1;
            col--;
        }
        
        row++;
        cout<<endl;
    }
    
    return 0;
}