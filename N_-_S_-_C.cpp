#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    for(int i=a+1;i<b;i++)
    {
        cout <<i <<" " <<pow(i,2) <<" " <<pow(i,3) <<endl;
    }
}
