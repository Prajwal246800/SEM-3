// #include<iostream>
// using namespace std;
// int a=5;
// int main()
// {
//     cout<<"a="<<a<<endl;
//     int a=10;
//     cout<<"Now a="<<a<<endl; //local scope has higher precedence over global scope
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     const int a=5;
//     cout<<a<<endl;
//     // a=5; //Error, because a is defined to be a constant
//     cout<<a<<endl;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int const a=10;
//     const int b=20;
//     //Naturally, a const variable must be initialized when defined
//     // const int c;
//     // int const d;
//     // Constants must be initialized when they are declared, as you mentioned. 
//     // Hence, const int c; and int const d; will result in errors since they are uninitialized.

//     cout<<"const a="<<a<<endl<<"const b="<<b<<endl;

//     // a=50;
//     // An attempt is made to change the value of a using a = 50;, 
//     // which results in an error because constants cannot be modified after initialization.

//     // int *ptr2;
//     // ptr2=&a;
//     // Error: invalid conversion from const int* to int*
//     // There's an attempt to create a pointer int *ptr2; 
//     // and assign it the address of a using ptr2 = &a;, which generates an error. 
//     // This error occurs because a is a constant and cannot be pointed to by a non-constant pointer (int *).
// }


#include<iostream>
using namespace std;
int main()
{
    const int a=10; //a is integer constant
    int b=20;
    const int* ptr1=&b; //ptr1 is not constant, it points to constant data
    // a is constant and cannot be changed
    // a=100;
    cout<<"a="<<a<<endl;
    // ptr1 points to constant data(b) and cannot be changed
    // *ptr1=200;
    cout<<"b="<<b<<" "<<"ptr1 points to b: "<<*ptr1<<endl;
    // b is not constant, therefore can be changed
    b=200;
    cout<<"b="<<b<<" "<<"ptr1 points to b: "<<*ptr1<<endl;
    // pointer may point to some other variable, because ptr1 is not constant
    int c=30;
    ptr1=&c;
    cout<<"c="<<c<<" "<<"ptr1 points to c: "<<*ptr1<<endl;
    c=300; //Okay, because c is not constant
    cout<<"c="<<c<<" "<<"ptr1 points to c: "<<*ptr1<<endl;
    //Error: ptr1 points to constant data(c), which cannot be changed
    // *ptr1=300;
}