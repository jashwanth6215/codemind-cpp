#include<iostream>
using namespace std;
int main()
{
    int a;
    int c=0;
    cin >>a;
    for(int i=2;i<a;i++)
    {
       if(a%i==0)
       {
           c++;
       }
    }
    if(c==0)
    {
        cout <<"Prime";
    }
    else
    {
        cout <<"Not Prime";
    }
}
