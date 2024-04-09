#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >>x;
    if(x%3==0 && x%5==0)
    {
        cout <<"PlingPlang";
    }
     else if(x%3==0 && x%7==0)
    {
        cout <<"PlingPlong";
    }
     else if(x%3==0)
    {
       cout <<"Pling";
    }
    else if(x%5==0 && x%3==0)
    {
        cout <<"PlangPling";
    }
    else if(x%5==0 && x%7==0)
    {
        cout <<"PlangPlong";
    }
    else if(x%5==0)
    {
       cout <<"Plang";
    }
    else if(x%7==0 && x%3==0)
    {
        cout <<"PlongPling";
    }
    else if(x%7==0 && x%5==0)
    {
        cout <<"PlongPlang";
    }
    else if(x%7==0)
    {
        cout <<"Plong";
    }
    else
    {
        cout <<x;
    }
    
}
