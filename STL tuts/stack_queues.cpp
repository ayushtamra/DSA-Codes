#include<bits/stdc++.h>     //contains all stl stuffs
//or
// #include<iostream>
// #include<stack>
// #include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;      //declaration like a vector but in vector we can access any element but in stack only topmost
    st.push(1);
    st.push(5);
    st.push(7);
    st.push(34);

    st.pop();       //pop element
    cout<<st.top()<<endl;

    //queue
    queue<int> qu;
    qu.push(3);
    qu.push(5);
    qu.push(67);
    qu.push(23);

    //delete the elements
    qu.pop();

    //front
    cout<<qu.front()<<endl;

    //Dequeue- Double ended queue, a two way operation available

    deque<int> dqu;
    dqu.push_back(10);    //Adds element to the back
    dqu.push_front(30);   //Adds element to the first
    dqu.push_front(5);
    dqu.push_back(67);
    cout<<dqu.front()<<endl;
    cout<<dqu.back()<<endl;
    dqu.pop_back();     //removes back element
    dqu.pop_front();    //removes front element
    cout<<dqu.front()<<endl;
    cout<<dqu.back()<<endl;
    return 0;
}
