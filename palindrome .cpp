#include<iostream>
using namespace std;
int reverse(int n)
{
    int result=0;
    while(n>0)
    {
        int last=n%10;
        result=result*10+last;
        n=n/10;
        
    }
    return result;
}
bool palindrome(int n)
{
    int s=reverse(n);
    return s==n;
}
int main()
{
    int n=121;
    cout<<palindrome(n);
}

