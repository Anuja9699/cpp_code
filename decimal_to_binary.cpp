#include<iostream>
using namespace std;
int dectobin(int n)
{
    int pow=1;
    int  binary=0;
    while(n>0)
    {
        int rem=n%2;
        binary+=rem*pow;
        pow*=10;
        n=n/2;
    }
    return binary;
}
int main()
{
int n=15;
cout<<dectobin(n);
}