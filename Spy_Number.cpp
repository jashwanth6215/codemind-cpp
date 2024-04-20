#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    int t=a;
    int r,b;
    int sum=0,product=1;
    while(a!=0)
    {
        r=a%10;
        sum+=r;
        a/=10;
    }
    while(t!=0)
    {
        b=t%10;
        product*=b;
        t/=10;
    }
    if(sum==product)
    {
        cout <<"Spy Number";
    }
    else
    {
        cout <<"Not Spy Number";
    }
}
