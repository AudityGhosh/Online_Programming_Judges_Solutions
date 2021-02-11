#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,m,n,t,x;
    cin>>n>>x;
    vector<long long>v;
    for(i=0;i<n;i++)
    {
        cin>>j;
        if(j!=x)
            v.push_back(j);
    }
    if(v.size()==0)
        cout<<endl;
    else
    {
       cout<<v[0];
    for(i=1;i<v.size();i++)
        cout<<" "<<v[i];
    cout<<endl;
    }

}
