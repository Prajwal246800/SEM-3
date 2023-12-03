// #include<iostream>
// using namespace std;
// int main()
// {
//     // int *p=new int;
//     // *p=5;
//     //The above 2 statements is equivalent to below statement i.e., initialization is also possible
//     int *p=new int(5);
//     cout<<*p<<endl;
//     delete p;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int *a=new int[5];
//     for(int i=0;i<5;i++)
//     {
//         //cin>>a[i]; //May read input from user
//         a[i]=i;
//     }
//     cout<<"The numbers are:"<<endl;
//     for(int i=0;i<5;i++)
//         cout<<a[i]<<" ";
//     cout<<endl;
//     delete[] a;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int *a=new int[5];
//     for(int i=0;i<5;i++)
//     {
//         //cin>>*(a+i); //may read input from user
//         *(a+i)=i;
//     }
//     cout<<"The numbers are:"<<endl;
//     for(int i=0;i<5;i++)
//         cout<<*(a+i)<<" ";
//     cout<<endl;
//     delete[] a;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int *a=new int[5]{1,2,3,4,5}; //Initialization of dynamically allocated memory
    cout<<"The numbers are:"<<endl;
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    delete[] a;
    return 0;
}