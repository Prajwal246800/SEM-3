// #include <iostream>
// using namespace std;
// int main() 
// {
//     int a = 10, &b = a; // b is reference of a
//     // a and b have the same memory
//     cout << "a = " << a << ", b = " << b << endl;
//     cout << "&a = " << &a << ", &b = " << &b << endl;
//     // Changing a appears as change in b
//     ++a;
//     cout << "a = " << a << ", b = " << b << endl;
//     // Changing b also changes a
//     ++b; 
//     cout << "a = " << a << ", b = " << b << endl;
// }

// // OUTPUT:
// // a = 10, b = 10
// // &a = 0x28e41ff914, &b = 0x28e41ff914
// // a = 11, b = 11
// // a = 12, b = 12


// #include<iostream>
// using namespace std;
// void fnParamTest(int,int &);

// int main()
// {
//     int a=2;
//     cout << "a = " << a << ", &a = " << &a << endl;
//     fnParamTest(a,a);
// }

// void fnParamTest(int b,int &c)
// {
//     //b: value parameter, c: reference parameter
//     cout << "b = " << b << ", &b = " << &b << endl;
//     cout << "c = " << c << ", &c = " << &c << endl;
// }

// // OUTPUT:
// // a = 2, &a = 0x19607ffaec
// // b = 2, &b = 0x19607ffac0
// // c = 2, &c = 0x19607ffaec


// #include<iostream>
// using namespace std;
// void fn(int &);

// int main()
// {
//     int a=2;
//     cout<<"a= "<<a<<endl;
//     fn(a);
//     cout<<"a= "<<a<<endl;
// }

// void fn(int &iRef)
// {
//     iRef++;
// }

// // OUTPUT:
// // a= 2
// // a= 3


// #include<iostream>
// using namespace std;
// int& abc()
// { 
//     int x=10;
//     cout<<"x="<<x<<" &x="<<&x<<endl;
//     return x;
// }

// int main()
// {
//     int &res=abc();
//     cout<<"res="<<res<<" &res="<<&res<<endl;
//     return 0;
// }

// // OUTPUT:
// // Reference.cpp: In function 'int& abc()':
// // Reference.cpp:61:12: warning: reference to local variable 'x' returned [-Wreturn-local-addr]
// //    61 |     return x;
// //       |            ^
// // Reference.cpp:59:9: note: declared here
// //    59 |     int x=10;
// //       |         ^
// // x=10 &x=0x95899ffd6c
// // res=


// #include <iostream>
// using namespace std;
// int& Return_ref(int &x) 
// {
//     return (x);
// }

// int main( ) 
// {
//     int a = 10, b;
//     b = Return_ref(a);
//     cout << "a = " << a << " and b = "<< b << endl;
//     Return_ref(a) = 3; 
//     cout << "a = " << a<<endl;
//     return 0;
// }

// // OUTPUT
// // a = 10 and b = 10
// // a = 3