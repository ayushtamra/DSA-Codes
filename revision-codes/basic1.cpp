// Switch statements
/*
Important conclusion:
break is necessarry without it all cases(if no break ahead too) and even default is executed
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int k;
//     cin>>k;
//     switch(k)
//     {
//         case 1:
//             cout<<"Ayush";
//         case 2:
//             cout<<"Krishna";
//         default:
//             cout<<"Namaste";    
//     }
// }



// Number given is prime no. or not

#include<bits/stdc++.h>
using namespace std;

int PrimeTester(int n)
{
    int flag = 0;
    if(n == 1)
    {
        cout<<"Neither composite nor prime number";
        return 0;
    }
    for(int i=2;i<n/2;i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Given number is a prime number"<<endl;
    }
    else
    {
        cout<<"Given number is a composite number"<<endl;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        PrimeTester(n);
    }
    return 0;
}


// Square of 