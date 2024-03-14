#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
    float a,b;
    cin >>a>>b;
    cout << fixed<<setprecision(2);
    cout <<sqrt((a*a)+(b*b));
}