#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int solve()
{
    int n;
    cin>>n;
    int arr[n], flag = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            break;
        }
    }
    if(i == n-1)
    {
        cout<<"Array is sorted"<<endl;
        return 0;
    }
    cout<<"Array is not sorted"<<endl;
    cout<<"Sorting array through bubble sort..."<<endl;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

signed main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("c:/Users/AYUSH/Desktop/DSA-Codes/input.txt", "r", stdin);
    freopen("c:/Users/AYUSH/Desktop/DSA-Codes/output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        solve();
    }
    return 0;
}