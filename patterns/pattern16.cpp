#include<iostream>
using namespace std;

int main(){
    int row=1,col,n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout<<endl;
    
    while (row<=n)
    {
        col=n;
        while (row<=col)
        {
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}