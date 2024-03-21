#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    float p,r,t;
    cin >>p>>r>>t;
    cout <<fixed<<setprecision(2);
    cout <<(p*(pow((1+r/100),t)))-p;
}