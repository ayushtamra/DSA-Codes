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

// int main(int argc, char const *argv[])
// {
//     int n,d;
//     cin>>d>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     rotation(arr, d, n);
//     return 0;
// }





//Method 1: Using temp array bulk rotation
// Time complexity : O(n) 
// Auxiliary Space : O(d)

// #include<iostream>
// using namespace std;
// int rotation(int a[],int d,int n)
// {
//     int temp[d];
//     for(int i=0;i<d;i++)
//     {
//         temp[i] = a[i];
//     }
//     for(int i=d;i<n;i++)
//     {
//         a[i-d] = a[i];
//     }
//     for(int i=n-d;i<n;i++)
//     {
//         a[i] = temp[i-(n-d)];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
// int main()
// {
//     int d,n;
//     cin>>n>>d;
//     int arr[n]; 
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     rotation(arr,d,n);
// }


//Method 2: Rotate one by one
// Time complexity : O(n * d)
// Auxiliary Space : O(1)

// #include<iostream>
// using namespace std;
// int rotation(int a[],int d,int n)
// {
//     for(int j=0;j<d;j++)
//     {
//         int t = a[0];
//         for(int i=0;i<n-1;i++)
//         {
//             a[i] = a[i+1];
//         }
//         a[n-1] = t;
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
// int main()
// {
//     int n,d;
//     cin>>n>>d;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     rotation(arr,d,n);
// }


//Remember: Space complexity = auxillary space + space for input
//So in above examples we are mentioning auxillary space which does not include input space


//Method 3: Juggling algo



#include<iostream>
using namespace std;
int rotation(int a[],int d,int n)
{
    
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotation(arr,d,n);
}