#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    cout <<"H:M:S-"<<a/3600<<":"<<(a%3600)/60<<":"<<(a%3600)%60;
}