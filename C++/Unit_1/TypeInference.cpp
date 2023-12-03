#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a=1;
    auto b=1.5;
    auto c=1.5f;
    auto d='x';
    auto e="s";
    auto f=&a;
    auto g=&b;
    cout<<"a="<<a<<" type="<<typeid(a).name()<<endl;
    cout<<"b="<<b<<" type="<<typeid(b).name()<<endl;
    cout<<"c="<<c<<" type="<<typeid(c).name()<<endl;
    cout<<"d="<<d<<" type="<<typeid(d).name()<<endl;
    cout<<"e="<<e<<" type="<<typeid(e).name()<<endl;
    cout<<"f="<<f<<" type="<<typeid(f).name()<<endl;
    cout<<"g="<<g<<" type="<<typeid(g).name()<<endl;
    //Below line is an error, because witout initialization the data type cannot be deduced
    //auto h;
    return 0;
}