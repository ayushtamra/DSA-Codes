// #include <bits/stdc++.h>
// using namespace std;
// void printSubsequence(string input, string output, string blood)
// {
//     int flag = 0;
//     if (input.empty())
//     {
//         if(output == blood)
//         {
//             cout<<"POSITIVE"<<endl;
//             flag ++;
//         }     
//         return;
//     }

//     printSubsequence(input.substr(1), output + input[0], blood);

//     printSubsequence(input.substr(1), output, blood);

//     if(flag == 0)
//     {
//         cout<<"NEGATIVE"<<endl;
//         return;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     string output = "";
//     string input, blood;
//     int n;
//     cin>>input;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>blood;
//         printSubsequence(input, output, blood);
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
 
// Function computes all the subsequence of an string
void subsequence(string str, string blood)
{
     
    // Iterate over the entire string
    for (int i = 0; i < str.length(); i++)
    {
         
        // Iterate from the end of the string
        // to generate substrings
        for (int j = str.length(); j > i; j--)
        {
            string sub_str = str.substr(i, j);
            if(sub_str == blood)
            {
                cout<<"POSITIVE"<<endl;
            }
 
            // Drop kth character in the substring
            // and if its not in the set then recur
            for (int k = 1; k < sub_str.length() - 1; k++)
            {
                string sb = sub_str;
 
                // Drop character from the string
                sb.erase(sb.begin() + k);
                subsequence(sb);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input, blood;
    int n;
    cin>>input;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>blood;
        subsequence(input);
    }
    return 0;
}


coronavirus
3
abcde
crnas
onarous


NEGATIVE
POSITIVE
NEGATIVE