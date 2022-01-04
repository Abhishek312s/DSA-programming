#include<iostream>
#include<math.h>
using namespace std;


int decToBin(int num){

    int ans=0,bit,i=0;
    while (num!=0)
    {
        bit=num&1;
        ans=(bit*pow(10,i))+ans;
        num=num>>1;
    }
    return ans;

}

int main()
{
   int num;
   cout<<"Enter a Number: ";
   cin>>num;
   num=num*(-1);
   cout<<"Answer: "<<decToBin(num);
   return 0;
}