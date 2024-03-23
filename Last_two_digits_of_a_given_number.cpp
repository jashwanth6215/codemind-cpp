#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    std::cin >>a;
    std::cout << std::setw(2) << std::setfill('0') << a % 100;
}
