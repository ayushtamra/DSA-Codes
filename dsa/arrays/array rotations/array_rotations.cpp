#include<bits/stdc++.h>
using namespace std;

int rotation(int arr[], int d, int n)
{
    int a[d];
    for(int i=0;i<d;i++)
    {
        a[i] = arr[i];
    }
    for(int i=0;i<n-d;i++)
    {
        arr[i] = arr[i+d];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i] = a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n,d;
    cin>>d>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotation(arr, d, n);
    return 0;
}