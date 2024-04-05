#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    cout <<(a==1?"Monday":a==2?"Tuesday":a==3?"Wednesday":a==4?"Thursday":a==5?"Friday":a==6?"Saturday":a==7?"Sunday":"Invalid input");
}
