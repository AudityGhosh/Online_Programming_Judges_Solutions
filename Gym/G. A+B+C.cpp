/*problem link: https://codeforces.com/gym/101917/problem/G
input:
2
1/2 1/3 1/4
3/2 1/2 2/2

output:
13/12
3/1

*/



#include <bits/stdc++.h>
using namespace std;
#define ll long long

void reduceFraction(ll x, ll y)
{
    ll d;
    d = __gcd(x, y);

    x = x/d;
    y = y / d;

    cout<<x<<"/"<<y<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,m,n,t,a1,b1,a2,b2,a3,b3,ans1,ans2;
    char c,d;
    string s;
    cin>>t;

    while(t--)
    {
     cin>>a1>>c>>b1>>a2>>c>>b2>>a3>>c>>b3;
     //cout<<a1<<" "<<b1<<" "<<a2<<" "<<b2<<" "<<a3<<" "<<b3<<endl;
     ll gcd=__gcd(__gcd(b1,b2),b3);
     ans2=(b1*b2*b3)/gcd;
     ans1=((ans2/b1)*a1)+((ans2/b2)*a2)+((ans2/b3)*a3);

     reduceFraction(ans1,ans2);
    }
    return 0;
}
//Audity Ghosh
