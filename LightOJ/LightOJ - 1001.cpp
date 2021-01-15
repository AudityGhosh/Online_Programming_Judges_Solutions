/*problem link: https://lightoj.com/problem/1001
input:
3
10
20
7
output:
0 10
10 10
0 7
each problem can contain max 10 elements*/



#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>10)
        {
            cout<<10<<" "<<n-10<<endl;

        }
        else
            cout<<n<<" "<<0<<endl;
    }
}
//Audity Ghosh
