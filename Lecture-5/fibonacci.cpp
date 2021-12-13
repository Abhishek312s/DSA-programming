#include<iostream>
using namespace std;

int main(){
    int sum=0,n;
    cout<<"Enter a number :";
    cin>>n;

    for (int a = 0,b=1; sum <= n;sum=a+b)
    {
        cout<<sum;
        

        a=b;
        b=sum;
    }
    return 0;
}