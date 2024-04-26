#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout <<char('A'+j) <<" ";
        }
        cout <<endl;
    }
}
