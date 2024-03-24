#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float b1,b2,h;
    cin >>b1>>b2>>h;
    cout <<fixed<<setprecision(4);
    cout <<(b1+b2)/2*(h);
}
