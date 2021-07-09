#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    double r = ceilf(double(z)/double(y));
    if(r > x)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}