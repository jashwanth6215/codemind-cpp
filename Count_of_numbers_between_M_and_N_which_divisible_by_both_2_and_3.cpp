#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int c=0;
    cin >>a>>b;
    for(int i=a+1;i<b;i++)
    {
        if(i%2==0 && i%3==0)
        {
            c++;
        }
    }
    cout <<c;
}
