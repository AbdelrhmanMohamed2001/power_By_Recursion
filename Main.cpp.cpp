#include <iostream>

using namespace std;                              //problem 4...

int a,n;      //  a=base, n=exponential
   int power_1(int a , int n)
   {
       if(n==0)        //base case
       {
           return 1;
       }
         return  a* power_1(a,n-1);         //recursion case
   }

   int POWER_2(int a , int n)
   {
       if (n%2==0)                      //check if exponential even or odd
       {
           return POWER_2(a,n/2) * POWER_2(a,n/2);         //if even
       }
       else
       {
           return power_1(a,n/2+1) * power_1(a,n/2);       //if odd
       }
   }


int main()
{
    int a,n;
    cout<<"Enter numbers"<<endl;
    cin>>a>>n;

   cout<<a<<"^"<<n<<"="<<power_1(a,n)<<endl;  // a^n=...
   cout<<a<<"^"<<n<<"="<<POWER_2(a,n)<<endl;
   return 0;

}

