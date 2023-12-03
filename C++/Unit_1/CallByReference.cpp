// #include<iostream>
// using std::cout;
// using std::endl;
// void swap(int *,int *);

// int main()
// {
//     int a=2,b=3;
//     cout<<"Before swap: "<<"a="<<a<<" b="<<b<<endl;
//     swap(&a,&b);
//     cout<<"After swap: "<<"a="<<a<<" b="<<b<<endl;
// }

// void swap(int *m,int *n)
// {
//     int temp;
//     temp=*m;
//     *m=*n;
//     *n=temp;
// }

// // OUTPUT:
// // Before swap: a=2 b=3
// // After swap: a=3 b=2


#include<iostream>
using std::cout;
using std::endl;
void swap(int &,int &);
int main()
{
    int a=2,b=3;
    //char a='c',b='d';
    //double a=2.5,b=3.5;
    cout<<"Before swap: "<<"a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"After swap: "<<"a="<<a<<" b="<<b<<endl;
}
void swap(int &m,int &n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
}

// OUTPUT:
// Before swap: a=2 b=3
// After swap: a=3 b=2