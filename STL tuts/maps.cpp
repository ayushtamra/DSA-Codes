/*Note
Ordered map: is sorted based on key
unordered map: unsorted

         ordered map             unordered map
insert     O(logn)                  O(1)

delete     O(logn)                  O(1)

find       O(logn)                  O(1)

ordered map use balanced BST
unordered map use hashing
*/


#include<iostream>
#include<map>  //ordered map      
#include<unordered_map>  //unordered map
using namespace std;
int main(int argc, char const *argv[])
{
    //key will be int and value is float
    map<int, float> mp;
    mp[2] = 3.0;
    mp[1] = 4.2;
    mp[6] = 7.8;

    //both key and value are of int type
    unordered_map<int, int> ump;
    ump[2] = 2;
    ump[9] = 7;
    ump[3] = 16;

    if(ump.find(4) == ump.end())
    {
        cout<<"not found";      //Will show if key not there
    }
    else
    {
        cout<<"Found";
    }
    cout<<endl;
    
    mp.insert({2,3.4});

    //iterating through map

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
