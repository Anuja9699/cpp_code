#include<iostream>
using namespace std;
#include <typeinfo>

// int main()
// {
//     int a=10;
//     int *p=&a;
//     cout<<a<<endl;
//     cout<<*p<<endl;
//     cout<<&(a)<<endl;

// }
// ----------------------------------------------------
//  void change(int &n)
//  {
//     n=20;
// cout<< n<<endl;
//  }
// int main()
// {
// int a=10;
// change(a);
// cout<<a<<endl;

// }
int main()
{
    float a=10.2;
    cout<<typeid(a).name();
}