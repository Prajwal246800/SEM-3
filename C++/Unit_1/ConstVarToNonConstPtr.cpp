// #include<iostream>
// using namespace std;
// int main()
// {
//     const int a = 10;
//     //Error
//     int *ptr = &a;
// }


// const int a = 10; 
// This line declares a constant integer variable a and initializes it with the value 10. 
// The const keyword means that the value of a cannot be changed throughout the program.

// int *ptr = &a;
// This line declares a pointer variable ptr of type int and tries to store the memory address of the constant integer a using the & (address-of) operator.

// The error occurs because ptr is an integer pointer (int *), and it's attempting to point to a constant integer (const int a).
// In C++, assigning the address of a constant variable to a non-constant pointer is not allowed because it violates the const-correctness principle.
// It would enable the possibility of modifying a constant value through a non-constant pointer, which goes against the concept of const correctness and could lead to unintended behavior or bugs in the code.