#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float s,h,d,pf;
    cin >>s>>h>>d;
    pf=s*0.12;
    cout <<fixed<<setprecision(2);
    cout <<pf<<endl<<pf+s+h+d;
}
