#include<iostream>
using namespace std;
int main()
{

    int sum=0;
    int number=345243;
    while(number>0)
    {
     int a=number%10;
     if(a%2!=0){
     sum=sum+a;}
     number=number/10;

    }
    cout<<"sum is"<<sum;
    

}