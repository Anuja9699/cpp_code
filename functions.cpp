#include<iostream>
using namespace std;
// ------------addition-------------------
// int add(int a,int b=1)
// {
//     cout<<a<<b;
//     return a+b;
// }
// int diff(int a,int b)
// {
//     return a-b;
// }
// int main()
// {
//   cout<<"addition is"<<add(1)<<endl;
//   cout<<"subtraction is"<<diff(1,2);

// }

// -----------------------factorial of n---------------------------------
// int factorial(int n)
// {
//     int fac=1;
//     if(n==0||n==1)
//     {
//         return fac= 1;
//     }
//     else{
//     for(int i=2;i<=n;i++)
//     {
//         fac*=i;
//     }}
//     return fac;
// }
// int main()
// {
//     int n=5;
//    cout<<"factorail of" <<n<<"is"<<factorial(n);
// }
// -----------------------------------prime or not----------------------
// bool prime(int n)
// {
//     for(int i=2;i<n-1;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"not prime";
//             return false;
//         }
//         else{
//             cout<<"prime";
//             return true;
//         }
//     }
// }
// int main()
// {
//  int n=10;
//  cout<<prime(n);
// }
// --------------------binomial coefficient------------------------
// formula is=n!/r!(n-r)!
 
 int factorial(int n)
{
    int fac=1;
    if(n==0||n==1)
    {
        return fac= 1;
    }
    else{
    for(int i=2;i<=n;i++)
    {
        fac*=i;
    }}
    return fac;
}
 int bino(int n,int r)
 {
    return factorial(n)/(factorial(r)*factorial(n-r));
 }
 
int main()
{
    int n=4;
    int r=2;
 cout<<"binomial of"<<n<<r<<"is"<<bino(n,r);
}