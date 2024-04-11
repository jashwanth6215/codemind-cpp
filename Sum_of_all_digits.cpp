#include<iostream>
using namespace std;
int main()
{
    int a,c=0,r;
    cin >>a;
    while(a!=0)
    {
        r=a%10;
        c+=r;
        a/=10;
    }
    cout <<c;
}
