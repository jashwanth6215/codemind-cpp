#include<iostream>
using namespace std;
int main()
{
    int t,n,m,k;
    cin >>t;
    while(t!=0)
    {
        cin >>n>>m>>k;
        if(n<=(m-k))
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
        t--;
    }
}
