#include<iostream>
#include<math.h>
using namespace std;

// brute force methods hai ye...agee aur pdhne ke baad krenge bdiya-


 bool isPowerOfTwo(int n) {
        int ans=1;
       for(int i=0;i<31;i++){
           if(ans==n){
               return true;
           }
           if(ans<(INT_MAX/2))
           ans=ans*2;
       }
        return false;
    }

int main()
{
   int num;
   cout<<"Enter a Number: ";
   cin>>num;
   cout<<"Answer: "<<isPowerOfTwo(num);
   return 0;
}



// uper vaale se bhi bekar solution-


//  bool isPowerOfTwo(int n) {
//         int ans=1;
//         for(int i=0;i<31;i++){
//            if(pow(2,i)==n){
//                return true;
//            }
//        }
//         return false;
//     }
