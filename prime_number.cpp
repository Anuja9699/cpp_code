// print prime number from 2 to n
#include<iostream>
using namespace std;
bool prime(int i)
{
    int n=i;
    for(int j=2;j<=n-1;j++)
    {
        if(n%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n=30;
   for(int i=2;i<=n;i++)
   {
    if(prime(i)==true)
    {
        cout<<i<<endl;
    }
   }
}