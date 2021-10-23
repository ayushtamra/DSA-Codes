#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    //cin>>str;
    //cin doesnt reads the whole sentence breaks in space
    getline(cin,str);
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}
