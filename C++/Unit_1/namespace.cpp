// #include <iostream>
// using std::cout;
// int main ()
// {
//     cout << "Hello World " << std::endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     cout << "Hello World " << std::endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// //declare and define your own namespace
// namespace A
// {
//     int a = 23;
// }
// int main()
// {
//     int a = 45;
//     //use :: (scope) operator to access the variable defined in namespace A
//     cout<<A::a<<endl<<a<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// // first name space
// namespace first_space
// {
//     void func()
//     {
//     cout << "Inside first_space" << endl;
//     }
// }
// // second name space
// namespace second_space
// {
//     void func()
//     {
//     cout << "Inside second_space" << endl;
//     }
// }
// int main ()
// {
//     // Calls function from first name space
//     first_space::func();
//     // Calls function from second name space
//     second_space::func(); 
//     return 0;
// }


// #include <iostream>
// using namespace std;
// // first name space
// namespace first_space
// {
//     void func()
//     {
//         cout << "Inside first_space" << endl;
//     }
// }
// // second name space
// namespace second_space
// {
//     void func()
//     {
//         cout << "Inside second_space" << endl;
//     }
// }
// using namespace first_space;
// int main () {
//     // This calls function from first name space
//     func();
//     return 0;
// }


