#include<iostream>
using namespace std;
int main()
{
    int a;
    int r,b=0;
    cin >>a;
    int t=a;
    while(a!=0)
    {
        r=a%10;
        b=b*10+r;
        a/=10;
    }
    if(t==b)
    {
        cout <<"Palindrome";
    }
    else
    {
        cout <<"Not Palindrome";
    }
}
