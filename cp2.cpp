#include <bits/stdc++.h>
using namespace std;
int chef(int a)
{
    int sum = (a/1000) + (a%10), lar;
    while (a>0)
    {
        int d = a%10;
        if(lar < d)
        {
            lar = d;
        }
        a = a/10;
    }
    
    int ans  = lar*sum;
    if(ans > 100)
    {
        cout<<100<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        chef(a);
    }
    return 0;
}