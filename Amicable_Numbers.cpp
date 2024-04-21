#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    int s=0,sum=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s+=i;
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sum+=i;
        }
    }
    if(s==b && sum==a)
    {
        cout <<"Amicable";
    }
    else
    {
        cout <<"Not Amicable";
    }
}
