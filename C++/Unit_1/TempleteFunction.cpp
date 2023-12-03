#include<iostream>
using namespace std;
template<typename T> //or template<class T>
void swapG(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int int1=2,int2=3;
    cout<<"Integer Swap"<<endl;
    cout<<"Before Swap: "<<int1<<" "<<int2<<endl;
    swapG<int>(int1,int2);
    cout<<"After Swap: "<<int1<<" "<<int2<<endl;
    double double1=2.3,double2=3.2;
    cout<<endl<<"Double Swap"<<endl;
    cout<<"Before Swap: "<<double1<<" "<<double2<<endl;
    swapG<double>(double1,double2);
    cout<<"After Swap: "<<double1<<" "<<double2<<endl;
    char ch1='a',ch2='b';
    cout<<endl<<"Character Swap"<<endl;
    cout<<"Before Swap: "<<ch1<<" "<<ch2<<endl;
    swapG<char>(ch1,ch2);
    cout<<"After Swap: "<<ch1<<" "<<ch2<<endl;
    return 0;
}