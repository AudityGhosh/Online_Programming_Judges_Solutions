/*problem link: https://codeforces.com/gym/102219/problem/C
input:
2
2 5
3 3
4 5

1 5
1 7

output:
Case #1: 4
Case #2: -1

Explanation:
all variables are named according to the problem,
for every f and t you have to find max save.*/




#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,k,m,n,t,d,s,f,Max,o,save;
    cin>>d;
    for(o=0; o<d; o++)
    {
        cin>>n>>s;
        for(i=0; i<n; i++)
        {
            cin>>f>>t;
            if(t<=s)
                save = f;
            else
                save = f-(t-s);
            if(i==0)
                m=save;
            else
            {
                if(save>m)
                    m=save;
            }

        }
        cout<<"Case #"<<o+1<<": "<<m<<endl;
    }


}
//Audity Ghosh
