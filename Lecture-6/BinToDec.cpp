#include<iostream>
#include<math.h>
using namespace std;


int main()
{
   int n,i=0,ans=0;
   cout<<"Enter a Number: ";
   cin>>n;

   while (n!=0)
   {
      int bit=n%10;
      if (bit)
      {
         ans=ans+pow(2,i);
      }
      i++;
      n=n/10;
   }
   cout<<ans<<endl;

   return 0;
}