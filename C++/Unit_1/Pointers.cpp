#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr1=&a;
    cout<<"a="<<a<<" "<<"*ptr1="<<*ptr1<<endl;
    a=20;
    cout<<"a="<<a<<" "<<"*ptr1="<<*ptr1<<endl;
    *ptr1=30;
    cout<<"a="<<a<<" "<<"*ptr1="<<*ptr1<<endl;
    int c=40;
    ptr1=&c;
    cout<<"a="<<a<<" "<<"*ptr1 now points to c="<<*ptr1<<" c="<<c<<endl;
}