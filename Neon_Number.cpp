#include<iostream>
using namespace std;
int main()
{
      int a;
      cin >>a;
      int s=a*a,r,sum=0;
      while (s!=0)
      {
          r=s%10;
          sum+=r;
          s/=10;
      } 
      if (sum==a)
      {
          cout <<"Neon Number";
      } 
      else
      {
          cout <<"Not Neon Number";
      }
}
