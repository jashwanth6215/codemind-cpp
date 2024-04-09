#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a=n%10;
    int d;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
    }
    cout <<a+d;
}
