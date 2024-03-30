#include<iostream>
using namespace std;
int main()
{
    float a;
    cin >>a;
    if(a<150)
    {
        cout <<"Person is Dwarf.";
    }
    else if(a>150 && a<165)
    {
        cout <<"Person is average heighted.";
    }
    else if(a>165 && a<195)
    {
        cout <<"Person is taller.";
    }
    else
    {
        cout <<"Abnormal height.";
    }
}
