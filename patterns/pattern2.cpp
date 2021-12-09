#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Please Enter a Number" << endl;
    cin >> n;
    int row=1,col;
    while (row<=n)
    {
        col=1;
        while (col<=n)
        {
            cout<<row;
            col=col+1;
        }
        row=row+1;
        cout<<"\n";
    }
    
    return 0;
}