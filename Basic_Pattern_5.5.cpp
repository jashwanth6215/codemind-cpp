#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            cout <<"*";
        }
        for(int k=1;k<=i;k++)
        {
            cout <<i;
        }
        cout <<endl;
    }
}
