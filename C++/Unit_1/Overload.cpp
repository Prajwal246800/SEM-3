// #include<iostream>
// using namespace std;
// int add(int,int);
// double add(double,double);

// int main()
// {
//     cout<<add(2,2)<<endl;
//     cout<<add(2.5,2.6)<<endl;
// }

// int add(int a,int b)
// {
//     cout<<"2 int functions"<<endl;
//     return a+b; 
// }
// double add(double a,double b)
// {
//     cout<<"2 doublefunctions"<<endl;
//     return a+b;
// }


// #include<iostream>
// using namespace std;
// double area(double);
// double area(double,double);

// int main()
// {
//     double side=2;
//     cout<<"Area of square "<<area(side)<<endl; //calls area(double)
//     double length=2,breadth=3;
//     cout<<"Area of rectangle "<<area(length,breadth)<<endl; //calls area(double,double)
// }

// double area(double a)
// {
//     return a*a;
// }
// double area(double l,double b)
// {
//     return l*b;
// }


// #include<iostream>
// using namespace std;
// void f(int,int); //F1
// void f(double,double); //F2
// int main()
// {
//     f(2,3.5); //matches both F1 and F2, therefore ambiguous call, compile error
//     //Both F1 and F2 require 2 conversions
//     //f(2.3,(double)5); //Ambiguity may be resolved by explicit typecast during fn call
// }
// void f(int a,int b)
// {
//     cout<<"2 int fn"<<endl;
// }
// void f(double a,double b)
// {
//     cout<<"2 double fn"<<endl;
// }


// #include<iostream>
// using namespace std;
// int add(int,int);
// // double add(double,double);
// int add(int,double);
// int main()
// {
//     cout<<add(2,2)<<endl;
//     cout<<add(2.5,2.5)<<endl;
//     cout<<add(2.5,2)<<endl;
// }

// int add(int a,int b)
// {
//     cout<<"2 int function"<<endl;
//     return a+b; 
// }
// // double add(double a,double b)
// // {
// //     cout<<"2 double function"<<endl;
// //     return a+b;
// // } 
// int add(int a,double b)
// {
//     cout<<" int,double function"<<endl;
//     return a+b; 
// }


// #include<iostream>
// using namespace std;
// int add(int a) {return a;}
// int add(int a,int b=0) {return a+b;} //F2
// int add(int a,int b,int c=0) {return a+b+c;} //F3
// int main()
// {
//     int x=10,y=20,z=30;
//     add(10); //ambiguity: matches F1, F2
//     add(10,20); //ambiguity: matches F2, F3
//     add(10,20,30); //OK
// }