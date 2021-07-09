#include <bits/stdc++.h>
using namespace std;
int sccontrol(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        int c = 0;
        for(int j=0;j<n;j++)
        {
            if(a[i] > a[j] || i == j)
            {
                c++;
            }
        }
        cout<<pow(2,c)<<" ";
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sccontrol(a, n);
    return 0;
}