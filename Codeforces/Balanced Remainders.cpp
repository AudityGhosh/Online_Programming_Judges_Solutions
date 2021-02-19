/*Problem Link: http://codeforces.com/contest/1490/problem/B*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,k,m,n,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(n);
        int c[3];
        memset(c,0,sizeof c);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%3==0)
                c[0]++;
            if(a[i]%3==1)
                c[1]++;
            if(a[i]%3==2)
                c[2]++;
        }
        int balance_state=(c[0]+c[1]+c[2])/3;

        int required_moves=0;

        //Iteration 1
        for(i=0; i<2; i++)
        {
            if(c[i]>balance_state)
            {
                c[i+1]=c[i+1]+(c[i]-balance_state);
                required_moves+=(c[i]-balance_state);
                c[i]=balance_state;
            }

        }
        if(c[2]>balance_state)
        {
            c[0]=c[0]+(c[2]-balance_state);
            required_moves+=(c[2]-balance_state);
            c[2]=balance_state;

        }

        //Iteration 2
        for(i=0; i<2; i++)
        {
            if(c[i]>balance_state)
            {
                c[i+1]=c[i+1]+(c[i]-balance_state);
                required_moves+=(c[i]-balance_state);
                c[i]=balance_state;
            }

        }
        if(c[2]>balance_state)
        {
            c[0]=c[0]+(c[2]-balance_state);
            required_moves+=(c[2]-balance_state);
            c[2]=balance_state;

        }
        cout<<required_moves<<endl;
    }

    return 0;
}
//Audity Ghosh
