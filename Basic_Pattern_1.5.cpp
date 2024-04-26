#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for(int i=0;i<a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout <<char('A'+i)<<" ";
        }
        cout <<endl;
    }
}
