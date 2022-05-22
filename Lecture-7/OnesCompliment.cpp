#include<iostream>
#include<math.h>
using namespace std;


 int bitwiseComplement(int n) {
        int bit=0,i=0,ans=0;
        
        if(n==0){
            return 1;
        }
        
        while(n){
            bit=(n&1)^1;
            ans=(pow(2,i)*bit)+ans;
            n=n>>1;
            i++;
        }
        return ans;
    }

int main()
{
   int num;
   cout<<"Enter a Number: ";
   cin>>num;
   cout<<"Answer: "<<bitwiseComplement(num);
   return 0;
}