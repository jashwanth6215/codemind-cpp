#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int c=0;
    cin >>m>>n;
    for(int i=m+1;i<n;i++)
    {
        if(i%3==0)
        {
            c++;
        }
    }
    cout <<c;
}
