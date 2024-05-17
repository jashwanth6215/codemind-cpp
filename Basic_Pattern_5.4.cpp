#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",j);
        }
        for(int h=1;h<=a-i;h++)
        {
            printf("*");
        }
        printf("\n");
    }
}
