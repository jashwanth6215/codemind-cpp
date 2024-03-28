#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cin >>a;
    cout << setw(2) << setfill('0') << a % 100 << endl;
}
