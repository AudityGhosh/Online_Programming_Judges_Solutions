/*

Problem Link: https://atcoder.jp/contests/abc188/tasks/abc188_a

Can the team which is behind turn the tables with a successful three-point goal?

that means if I add three with the smaller number, will it be larger than the other one?

input:
3 5
output:
Yes

*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,m,n,x,y;
    cin>>m>>n;
    x = min(m,n);
    y = max(m,n);
    if(x+3>y)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}

/*Audity Ghosh*/
