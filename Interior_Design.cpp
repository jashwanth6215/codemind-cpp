#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin >>x1>>y1>>x2>>y2;
    cout << ((x1+y1) < (x2+y2)?(x1+y1):(x2+y2));
}
