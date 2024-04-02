#include<iostream>
using namespace std;
int main()
{
    char x;
    cin >>x;
    if(x>=65 && x<=91 )
    {
        cout <<"uppercase alphabet";
    }
    else if(x>=97 && x<=121)
    {
        cout <<"lowercase alphabet";
    }
    else
    {
        cout <<"not an alphabet";
    }
    
}
