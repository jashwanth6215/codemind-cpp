#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    if(a<3)
    {
        cout <<"LIGHT";
    }
    else if(a>=3 && a<7)
    {
        cout <<"MODERATE";
    }
    else if(a>=7)
    {
        cout <<"HEAVY";
    }
}
