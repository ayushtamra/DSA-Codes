#include<iostream>
using namespace std;
inline void fun()
{
    printf("%d",i);                                 
}
int main()
{
    int i=10;
    fun();               //like i was trying to relate with the recursion but its not possible to print variable declared in other function
}