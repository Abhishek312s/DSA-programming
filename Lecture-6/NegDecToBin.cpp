#include<iostream>
#include<math.h>
using namespace std;


int decToBin(int input){

    int ans=0,bit,i=0;

    int num=abs(input);

    num=~num+1;  // ~num = -(num+1)

    while (i<8)  // for 8 bits
    {
        bit=num&1;
        ans=(bit*pow(10,i))+ans;
        num=num>>1;
        i++;
    }
    return ans;

}

int main()
{
   int input;
   cout<<"Enter a number: ";
   cin>>input;
   cout<<"Answer: "<<decToBin(input);
   return 0;
}