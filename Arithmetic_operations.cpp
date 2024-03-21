#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    cout <<"Sum:"<<a+b<<"
";
    cout <<"Difference:"<<abs(a-b)<<"
";
    cout <<"Product:"<<a*b<<"
";
    cout <<"Quotient:"<<a/b<<"
";
    cout <<"Remainder:"<<a%b;
}