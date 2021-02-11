#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,d,x,y;
    cin>>v>>x>>y>>d;
    if(d>=(v*x) && d<=(v*y))
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}
