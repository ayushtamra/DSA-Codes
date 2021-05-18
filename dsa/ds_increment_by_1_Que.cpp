/*problem statement:
You are given an array or vector and you are given with q queries with l as left and r as right index in that array and you have to increment by one between them
Input:
array arr,
no. of query q,
for each query l and r

Output:
including l and r all elemnets between l and r is incremented by 1
*/

//Video link:  https://www.youtube.com/watch?v=Bndkkt-xqls

//With normal approach of iterating we will get O(Q*N) worst case complexity.
//Cumulative sum approach

#include<iostream>
#include<vector>            //Unlike arrays they are dynamic
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr(n,0);   //initialised all the elements with 0
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        arr[l]++;
        if((r+1) < n)
        {
            arr[r+1]--;
        }
    }

    //cumulatitive sum
    for(int i=1;i<n;i++)
    {
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Complexity is O(Q+N)
//This question can be solved with arrays also



