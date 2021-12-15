/*
Problem link: https://www.codechef.com/START20C/problems/BRTXORS/

Input:
3
1
3
7
Output:
1
4
8

Logic:
I tried to catch the pattern after running n = 1 to n=20 and found that there is a connection between the power of 2 and n.
Numbers as power of 2 followed a pattern and others followed another pattern.
I did not use pow() because it was risky to use pow() with 1e9+7.
Corner Case: There was a corner case, 2

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

//check whether n is a power of 2
bool isPowerOfTwo(ll n)
{
    if(n==0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

//provides the mod result
ll power(ll n)
{
    ll M = 1000000007;
    ll f = 1;

    for (ll i = 1; i <= n; i++)
        f = (f*2) % M;

    return f;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        if(n==2)
            cout<<2<<endl;


        else
        {
            if(isPowerOfTwo(n))
                cout<<power(ceil(log2(n+1)))-1<<endl;
            else
                cout<<power(ceil(log2(n)))<<endl;
        }



    }
    return 0;
}
/***********AUDITY GHOSH****************/

