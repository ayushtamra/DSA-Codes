// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int i,n,t,j,s=0;
//     cin>>t;
//     for(i=1;i<=t;i++)
//     {
//         cin>>n;
//         for(j=1;s<n;j++)
//         {
//             s+=j;
//         }
//         cout<<j<<endl;
//         s=0;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int i,n,l,r;
//     cin>>n;
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cin>>l>>r;
//     for(i=l-1;i<=r-1;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }

// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int i,t,j,k;
//     string s;
//     cin>>t;
//     for(i=1;i<=t;i++)
//     {
//         int count[256]={0},sum=0;
//         cin>>s;
//         int len=s.length();
//         for(j=0;j<len;j++)
//         {
//             count[s[j]]++;
//         }
//         for(k=0;k<len;k++)
//         {
//             sum+=(count[s[k]]-1);
//             count[s[k]]=1;
//         }
//         cout<<sum<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int sum,temp=0,count=0;
        cin>>sum;
        for(int j=0;j<n;j++)
        {
            for(int k=i;k<n;k++)
            {
                for(int m=j;m<=k;m++)
                {
                    count+=a[m];
                }
                if(count==sum)
                {
                    temp++;
                }
                count=0;
            }
        }
        cout<<temp<<endl;
    }
	return 0;
}