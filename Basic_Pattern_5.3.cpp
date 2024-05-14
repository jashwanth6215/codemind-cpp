#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout <<i;
        }
        for(int k=1;k<=a-i;k++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}
