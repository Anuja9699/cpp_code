#include<iostream>
using namespace std;
int bintodec(int n)
{
    int pow=1;
    int decimal=0;
    while(n>0)
    {
        int last=n%10;
        decimal+=pow*last;
        pow=pow*2;
        n=n/10;
    }
    return decimal;

}
int main()
{
 int n=1111;
 cout<<bintodec(n);
}