#include<iostream>
using namespace std;
int main()
{
    float p,ch,b,m,c;
    cin >>p>>ch>>b>>m>>c;
    int M=((p+ch+b+m+c)/500)*100;
    if(M>=90)
    {
        cout <<"Grade A";
    }
    else if(M>=80)
    {
        cout <<"Grade B";
    }
    else if(M>=70)
    {
        cout <<"Grade C";
    }
    else if(M>=60)
    {
        cout <<"Grade D";
    }
    else if(M>=40)
    {
        cout <<"Grade E";
    }
    else if(M<40)
    {
       cout <<"Grade F";
    }
}
