#include<iostream>
using namespace std;
int main()
{
    int a;
    int c=1;
    cin >>a;
    for(int i=a;i>=1;i--)
    {
        c*=i;
    }
    cout <<c;
}
