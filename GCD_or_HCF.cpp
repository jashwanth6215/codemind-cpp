#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    for(int i=1;i<(a>b)?a:b;i++)
    {
         if(a*i%b==0)
        {
            cout <<(a*b)/(a*i);
            break;
        }
    }
}
