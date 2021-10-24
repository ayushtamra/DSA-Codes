//Recursive solution O(2^n)

// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n)
// {
//     if(n==1||n==2)
//     {
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fib(n);
// }


//using dp optimisation O(n)

// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n,int arr[])
// {
//     static int result;
//     if(arr[n]!=0)
//     {
//         return arr[n];
//     }
//     if(n==1||n==2)
//     {
//         return 1;
//     }
//     result=fib(n-1,arr)+fib(n-2,arr);
//     arr[n]=result;
//     return result;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n+1]={0};
//     cout<<fib(n,arr);
// }

//bottom up approach O(n)

// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n)
// {
//     int a=1,b=1,i,s;
//     for(i=0;i<n;i++)
//     {
//         s=a;
//         a=a+b;
//         b=s;
//     }
//     cout<<b;
//     return 0;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fib(n);
// }