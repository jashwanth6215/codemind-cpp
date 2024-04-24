#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin >>a;
    int t=a;
    int d=a;
    int c=0,r,b=0;
    while(t>0)
    {
        c++;
        t/=10;
    }
    while(a!=0)
    {
        r=a%10;
        b+=pow(r,c);
        c--;
        a/=10;
    }
   if(b==d)
   {
       cout <<"True";
   }
   else
   {
       cout <<"False";
   }
}
