
//O(n) complexity

// #include<bits/stdc++.h>
// using namespace std;
// int binaryexp(int a,int n)
// {
//     static int result,count=0;
//     if(n==1)
//     {
//         return a;
//     }
//     if(n%2==0)
//     {
//         result=binaryexp(a,n/2)*binaryexp(a,n/2);
//     }
//    else
//    {
//        result=binaryexp(a,(n/2)+1)*binaryexp(a,n/2);
//    }
//    count++;
//    cout<<count<<endl;
//    return result;
// }
// int main()
// {
//     int a,n;
//     cin>>a>>n;
//     cout<<binaryexp(a,n);
// }


//Binary exponentiation dp optimisation approach O(logn) complexity

// #include<bits/stdc++.h>
// using namespace std;
// int binaryexp(int a,int n,int memo[])
// {
//     static int result,count=0;
//     if(memo[n]!=0)
//     {
//         return memo[n];
//     }
//     if(n==1)
//     {
//         return a;
//     }
//     if(n%2==0)
//     {
//         result= binaryexp(a,n/2,memo)*binaryexp(a,n/2,memo);
//     }
//     else
//     {
//         result= binaryexp(a,n/2,memo)*binaryexp(a,(n/2)+1,memo);
//     }
//     memo[n]= result;
//     count++;
//     cout<<count<<endl;
//     return result;
// }
// int main()
// {
//     int a,n;
//     cin>>a>>n;
//     int memo[n+1]={0};
//     cout<<binaryexp(a,n,memo);
//     return 0;
// }



// proper logarithmic most efficient algorithm O(logn)

#include<bits/stdc++.h>
using namespace std;
int binaryexp(int a,int n)
{
    static int result,count=0;
    if(n==1)
    {
        return a;
    }
    if(n%2==0)
    {
        result=binaryexp(a,n/2);
        result*=result;
    }
    else
    {
        result=binaryexp(a,n/2);
        result*=result*a;
    }
    count++;
    cout<<count<<endl;
    return result;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<binaryexp(a,n);
}