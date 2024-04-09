#include<iostream>
using namespace std;
int main()
{
    int H,sp,spe;
    cin >>H>>sp>>spe;
    if(H>50 && sp>60 && spe>100)
    {
        cout <<"10";
    }
    else if(H>50 && sp>60)
    {
       cout <<"9";
    }
    else if(sp>60 && spe>100)
    {
        cout <<"8";
    }
    else if(H>50 && spe>100)
    {
        cout <<"7";
    }
    else if(H>50 || sp>60 || spe>100)
    {
        cout <<"6";
    }
    else
    {
        cout <<"5";
    }
}
