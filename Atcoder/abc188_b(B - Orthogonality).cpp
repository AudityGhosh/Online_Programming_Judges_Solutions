
/*
Problem Link: https://atcoder.jp/contests/abc188/tasks/abc188_b
Given two n-dimensional vectors a and b, check if inner product of a and b is zero.
input:
2
-3 6
4 2

Output:
Yes

Explanation: (-3)*4 + (6*2) = 0
*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll i,j,k,m,n,t;
  cin>>n;
  vector<ll>a(n);
  vector<ll>b(n);
  for(i=0;i<n;i++)
        cin>>a[i];
  for(i=0;i<n;i++)
    cin>>b[i];
  ll sum = 0;
  for(i=0;i<n;i++)
  {
      sum  = sum + (a[i]*b[i]);
  }
  if(sum==0)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
}
