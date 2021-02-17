/*Problem Link: https://www.codechef.com/problems/GVAWAY
input:
3
3 6 4
1 3 1
6 7 2
output:
4
1
2
there are infinite distinct real numbers between two different numbers but if two numbers are same the answer is 1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll l,k,r,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        if(l!=r)
            cout<<k<<endl;
        else
            cout<<1<<endl;
    }
}
//AudityGhosh
