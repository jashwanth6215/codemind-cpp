#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    float sum=0;
    cin >>a;
    for(int i=1;i<=a;i++)
    {
        sum+=1.0/i;
    }
    cout <<fixed<<setprecision(2);
    cout <<sum;
}
