// #include <iostream>
// using namespace std;
// int wd=30; int ht =20; char ch='/';
// void f2();
// void defaultCheck(int=wd,int=ht,char=ch);

// int main()
// {
//     defaultCheck();
//     f2();
//     return 0;
// }

// void f2()
// {
//     int wd=35;
//     ht=25;
//     defaultCheck(); 
// }
// void defaultCheck(int wd,int ht,char ch)
// {
//     cout<<"wd= "<<wd<<" ht= "<<ht<<" ch= "<<ch<<endl;
// }


// #include<iostream>
// using namespace std;
// int sum(int,int y=2);

// int main()
// {
//     cout<<sum(2)<<endl; //Calls sum(2,2) with default value 2 for 2nd parameter
//     cout<<sum(2,3)<<endl; //Calls sum(2,3)
// }

// int sum(int x,int y)
// {
//     return x+y;
// }


// void f(int,double=0.0,char); // Error: ??
// int main()
// {
//     int i=5;
//     double d=1.2;
//     char ch='a';
//     f(i,ch);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void g(int,double,char='a');
// void g(int,double=0.0,char); //OK, a new overload
// void g(int=0,double,char); //OK, a new overload
// int main()
// {
//     int i=5; double d=1.2;char c='b';
//     g();        //Prints: 0 0 a
//     g(i);       //Prints: 5 0 a
//     g(i,d);     //Prints: 5 1.2 a
//     g(i,d,c);   //Prints: 5 1.2 b
//     return 0;
// }
// void g(int i,double d,char c)
// {
//     cout<<i<<" "<<d<<" "<<c<<endl;
// }


// #include<iostream>
// using namespace std;
// void f(int a,int b=2);
// // void f(int a,int b=3); //Error, redeclaration, because b is already given default value
// void f(int a=5,int b); //Not a redeclaration, because a is given default value this time
// //Also, b is already given a default value in previous declaration

// int main()
// {
//     f( ); //calls f(5,2)
//     f(50); //calls f(50,2)
//     f(50,20); //calls f(50,20)
//     return 0;
// }

// void f(int a,int b)
// {
//     cout<<a<<" "<<b<<endl;
// }


// #include<iostream>
// using namespace std;
// int Area(int a, int b = 10) { return (a * b); }
// double Area(double c, double d) { return (c * d); }
// int main() {
//     int x = 10, y = 12, t;
//     double z = 20.5, u = 5.0, f;
//     t = Area(x); // Binds int Area(int, int = 10)
//     cout << "Area = " << t << endl; // t = 100
//     f = Area(z, u); // Binds double Area(double, double)
//     cout << "Area = " << f << endl; // f = 102.5
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int f(); //F1
// int f(int = 0); //F2
// int f(int, int); //F3
// int main()
// {
//     int x = 5, y = 6;
//     f(); //Error: Ambiguity between F1 and F2
//     f(x); // int f(int);
//     f(x, y); // int f(int, int);
//     return 0;
// }


// int fun(float a) {return 0;} // Function 1
// int fun(float a, int b) {return 0;} // Function 2
// int fun(float x, int y = 5) {return 0;} // Function 3
// int main()
// {
//     float p = 4.5, t = 10.5;
//     int s = 30;
//     fun(p, s); // CALL - 1
//     fun(t); // CALL – 2
//     return 0;
// }


