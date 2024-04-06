#include<iostream>
using namespace std;
int main()
{
    char x;
    cin >>x;
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='O' || x=='I' || x=='U')
    {
        cout <<"VOWEL";
    }
    else
    {
        cout <<"CONSONANT";
    }
}
