#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >>ch;
    cout <<(ch=='V'?"Violet":ch=='I'?"Indigo":ch=='B'?"Blue":ch=='G'?"Green":ch=='Y'?"Yellow":ch=='O'?"Orange":ch=='R'?"Red":"-1");
}
