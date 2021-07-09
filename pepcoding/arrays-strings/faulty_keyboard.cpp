// My answer
// #include <bits/stdc++.h>
// using namespace std;
// int FaultyKeyboard(string name, string typed)
// {
//     int i = 0, j;
//     for (j = 0; j < typed.length(); j++)
//     {
//         if (name[i] == typed[j])
//         {
//             i++;
//         }
//         else if (i > 0 && name[i - 1] != typed[j]) // i>0 for removing index out of bound condition
//         {
//             cout << "false";
//             return -1;
//         }
//     }
//     if (i == name.length() && j == typed.length())
//     {
//         cout << "true";
//     }
//     else
//     {
//         cout << "false";
//         return -1;
//     }
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     string name, typed;
//     cin >> name >> typed;
//     FaultyKeyboard(name, typed);
//     return 0;
// }

// Teacher answer

#include <bits/stdc++.h>
using namespace std;
int func(string name, string typed)
{
    int i = 0, j = 0;
    while (i <= name.length() && j < typed.length())
    {
        if (name[i] == typed[j])
        {
            i++;
            j++;
        }
        else if (i > 0 && name[i - 1] == typed[j])
        {
            j++;
        }
        else
        {
            cout << "false";
            return -1;
        }
    }
    if (i == name.length() && j == typed.length())
    {
        cout << "true";
        return 0;
    }
    else
    {
        cout << "false";
        return -1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name, typed;
    cin >> name >> typed;
    func(name, typed);
    return 0;
}