#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a=0,b=1,c=0;
    while(b<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(b==n)
    {
        cout <<"True";
    }
    else
    {
        cout <<"False";
    }
}
