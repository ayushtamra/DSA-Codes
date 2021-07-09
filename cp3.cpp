#include <bits/stdc++.h>
using namespace std;
int maxdeliev(int n, int w, int k)
{
    // if(w < n/2)
            if(n-w < k)
            {
                if(n-w < k-(n-w))
                {
                    if(k-2*(n-w) > w-1)
                    {
                        cout<<n-1<<endl;
                    }
                    else{
                        cout<<k - (n-w)<<endl;
                    }
                }
                else
                if(n-w > k-(n-w))
                {
                    cout<<n-w<<endl;
                }
            }
        else
            if(n-w >= k)
            {
                cout<<k<<endl;
            }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, w, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>w>>k;
        maxdeliev(n, w, k);
    }
    return 0;
}