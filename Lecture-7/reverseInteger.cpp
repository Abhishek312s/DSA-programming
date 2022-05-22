#include<iostream>
using namespace std;


int reverse(int x) {
        int digit=0,ans=0;
        
        while(x){
            digit=x%10;
            if(ans > (INT_MAX/10) || ans< (INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+digit;
           x/=10;
        }
        return ans;
    }

int main()
{
   int num;
   cout<<"Enter a Number: ";
   cin>>num;
   cout<<"Answer: "<<reverse(num);
   return 0;
}