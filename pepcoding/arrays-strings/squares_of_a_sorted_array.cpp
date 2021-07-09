// #include <bits/stdc++.h>
// using namespace std;
// int func(int n, int a[])
// {
//     int i = 0, j = n-1, item = n-1, b[n];
//     while (i <= j)
//     {
//         b[item] = max(pow(a[i],2), pow(a[j], 2));
//         item --;
//         if(pow(a[i],2) <= pow(a[j],2))
//         {
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<b[i]<<" ";
//     }
    
//     return 0;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     func(n, a);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int func(int n, int arr[])
{
    int m = 0, k = n-1, sqr[n];
    for(int i=n-1;i>=0;i--)
    {
        if(pow(arr[m],2) <= pow(arr[k],2))
        {
            sqr[i] = pow(arr[k],2);
            k--;
        }
        else
        {
            sqr[i] = pow(arr[m],2);
            m++;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    func(n, arr);
    return 0;
}