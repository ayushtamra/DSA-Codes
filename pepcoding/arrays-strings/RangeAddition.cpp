// Question link: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/arrays-and-strings/range_addition/ojquestion

// My solution
#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    int a[n] = {0}, q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int arr[3];
        for(int j=0;j<3;j++)
        {
            cin>>arr[j];
        }
        for(int k=arr[0];k<=arr[1];k++)
        {
            a[k] += arr[2];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    func(n);
    return 0;
}

