/*problem link : https://codeforces.com/contest/43/problem/A*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mymap;
    int i,j,k,m,n,t;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        mymap[s]++;
    }
    m=-1;
    string temp;
    map<string,int>::iterator it;
    for(it=mymap.begin();it!=mymap.end();it++)
    {
        if(it->second>m)
        {
            m=it->second;
            temp=it->first;
        }
    }
    cout<<temp<<endl;
}
//AudityGhosh

