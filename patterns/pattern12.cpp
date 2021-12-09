#include<iostream>
using namespace std;

int main(){
    int row=1,col,n;
    char z='A';
    cout << "Enter a number" << endl;
    cin >> n;
    cout<<endl;
    
    while (row<=n)
    {
        col=1;
        while (col<=row)
        {
            cout<< z<<" ";
            z++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}