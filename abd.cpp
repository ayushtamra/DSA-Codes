// #include<iostream>
// using namespace std;
// struct emp
// {
//     int a=5;
// };
// int main()
// {
//     emp e;
//     cout<<e.a;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 		int n;
// 		cin >> n;
// 		long long ans = 1;
// 		for(int i=1;i<=n;i++) {
// 			long long x;
// 			cin >> x;
// 			ans = ans * x;
// 		}
// 		cout << ans << endl;
// 	}
// }


// #include <bits/stdc++.h>
// #include<string.h>
// using namespace std;
// int main() {
// 	ios_base::sync_with_stdio(false); 
//     cin.tie(NULL);
//     int t,n,sm,l;
//     string s,p="codechef";
//     cin>>t;
//     for(l=1;l<=t;l++)
//     {
//         cin>>n;
// 		int count[256]={0};
//         for(int j=0;j<n;j++)
//         {
//             cin>>s;
//             for(int k=0;k<p.length();k++)
//             {
//                 for(int m=0;m<s.length();m++)
//                 {
//                     if(p[k]==s[m])
//                     {
//                       count[p[k]]++;
//                     }
//                 }
//             }
//         }
//         for(int i=1;i<p.length();i++)
//         {
//             sm=count[p[0]];
//             if(count[p[i]]<sm)
//             {
//                 sm=count[p[i]];
//             }
//         }
// 		cout<<sm<<endl;
//     }
// 	return 0;
// }


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
//     int i,j,t,x;
//     cin>>t;
//     for(i=1;i<=t;i++)
//     {
//         cin>>x;
//         for(j=0;;j+=3)
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// void fibonacci(int n)
// {
//     int a=0,b=1,i;
//     for(i=1;i<=n;i++)
//     {
//         cout<<a<<" "; 
//         int temp=a;
//         a=b;
//         b=a+temp;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int expo(int b,int e,int m)
// {
// 	return (int)pow(b,e)%m;
// }
// int main() {
// 	ios_base::sync_with_stdio(false); 
// 	cin.tie(NULL);
// 	int t,b,e,m;
// 	cin>>t;
// 	for(int i=0;i<t;i++)
// 	{
// 		cin>>b>>e>>m;
// 		cout<<i+1<<"."<<" "<<expo(b,e,m)<<endl;
// 	}
// 	return 0;
// }