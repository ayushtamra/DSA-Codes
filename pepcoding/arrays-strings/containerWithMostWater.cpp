// Question link: https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/arrays-and-strings/container_with_most_water/ojquestion

// My soltuion
#include <bits/stdc++.h>
using namespace std;
int func(int n, int a[])
{
    int temp, area = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i+1;j--)
        {
            temp = (j-i) * min(a[i], a[j]);
            area = max(area, temp);
        }
    }
    cout<<area;
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
    func(n, a);
    return 0;
}


//Pepcoding solution