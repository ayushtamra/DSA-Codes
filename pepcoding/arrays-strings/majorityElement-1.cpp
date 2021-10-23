//Brute force method O(n^2)

#include <bits/stdc++.h>
using namespace std;
int func(int arr[], int n)
{
    int flag = 0;
    for (size_t i = 0; i < n; i++)
    {
        int count = 0;
        for (size_t j = 0; j < n; j++)
        {
            if(arr[flag] == arr[j])
            {
                count ++;
            }
        }
        if(count > n/2)
        {
            cout<<arr[flag];
            return 0;
        }
        flag ++;
    }
    cout<<"No such element";

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    func(a, n);
    return 0;
}

// Hashing method

// Pairing method

#include <bits/stdc++.h>
using namespace std;

int findCandidate(int arr[], int n)
{
    int count = 1, flag = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[flag] == arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count == 0)
        {
            flag = i;
            count = 1;
        }
    }
    return arr[flag];
}

int checkCandidate(int arr[], int n, int candidate)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(candidate == arr[i])
        {
            count++;
        }
    }
    if(count > n/2)
    {
        return candidate;
    }
    else{
        return 0;
    }
}

int printMajority(int arr[], int n)
{
    int cand = findCandidate(arr,n);
    int val = checkCandidate(arr, n, cand);
    if(val)
    {
        cout<<val;
    }
    else{
        cout<<"No majority element";
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
    printMajority(a,n);
    return 0;
}