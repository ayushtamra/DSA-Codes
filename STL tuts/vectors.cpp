// #include<iostream>
// #include<vector>            //Unlike arrays they are dynamic
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n,0);   //initialised all the elements with 0
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         arr[l]++;
//         if((r+1) < n)
//         {
//             arr[r+1]--;
//         }
//     }

//     //cumulatitive sum
//     for(int i=1;i<n;i++)
//     {
//         arr[i]+=arr[i-1];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Complexity is O(n)
//This question can be solved with arrays also



// Example 2: some more propeerties of vector

#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr(1,0);       //size 5 all elements initialised with 0
    cout<<arr.size()<<endl;     //size of array

    //dynamically increasing the size of the array through push back
    for(int i=1;i<9;i++)
    {
        arr.push_back(i);       //appending also crossing original length
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        arr.pop_back();      //popping elements
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

