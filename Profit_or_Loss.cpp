#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin >>x>>y;
    if(y>x)
    {
        cout <<"Profit";
    }
    else if(y==x)
    {
        cout <<"No Profit and No Loss";
    }
    else
    {
        cout <<"Loss";
    }
}
