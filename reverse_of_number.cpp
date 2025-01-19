#include<iostream>
using namespace std;
int main()
{
    int result=0;
    int number=12345;
    while(number>0)
    {
        int a=number%10;
        result=result*10+a;
        number=number/10;

    }
    cout<<result;
}

