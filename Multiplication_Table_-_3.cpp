#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin >>n>>a>>b;
    for(int i=a;i<=b;i++)
    {
        cout << n << " x "<< i<< " = "<<n*i<<endl;
    }
}
