#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> li;
    li.push_front(5);
    li.push_front(6);
    li.push_front(1);
    li.push_front(3);

    cout<<li.front()<<endl;
    cout<<li.back()<<endl;

    li.pop_back();
    li.pop_front();

    cout<<li.front()<<endl;
    cout<<li.back()<<endl;

    li.reverse();   //reverse of linked list
    return 0;
}
