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
            cout <<" ";
        }
        for(int h=1;h<=i;h++)
        {
            cout <<a-i+1<<" ";
        }
        cout <<endl;
    }
}
