#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for(int i=a;i>=1;i--)
    {
        for(int j=i;j<=a;j++)
        {
            cout <<j <<" ";
        }
        cout <<endl;
    }
}
