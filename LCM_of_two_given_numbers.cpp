#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    for(int i=1;i<=b;i++)
    {
        if(a*i%b==0)
        {
            cout <<a*i;
            break;
        }
    }
}
