#include<iostream>
using namespace std;
int main()
{
    int number=371;
    int n=number;
    int d1=n%10;
    n=n/10;
    int d2=n%10;
    n=n/10;
    int d3=n;
    int ans=d1*d1*d1+d2*d2*d2+d3*d3*d3;
    if(ans==number)
    {
        cout<<"it is armstrong number";
    }
    else{
        cout<<"not armstrong";
    }
}