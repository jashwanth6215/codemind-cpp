#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    int r,b=0;
    while(a!=0)
    {
        r=a%10;
        b=b*10+r;
        a/=10;
    }
    cout <<b;
}
