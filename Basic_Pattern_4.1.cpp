#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i%2!=0)
            {
                cout <<"0 ";
            }
            else
            {
                cout <<"1 ";
            }
        }
        cout <<endl;
    }
}
