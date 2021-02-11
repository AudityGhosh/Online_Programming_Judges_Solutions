/*problem link: https://codeforces.com/contest/1480/problem/A
input:
3
a
bbbb
az

output:
b
azaz
by

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,m,n,t;
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(i=0;i<s.size();i=i+2)
        {
            if(s[i]=='a')
                s[i]='b';
            else
                s[i]='a';
        }
        for(i=1;i<s.size();i=i+2)
        {
            if(s[i]=='z')
                s[i]='y';
            else
                s[i]='z';
        }
        cout<<s<<endl;
    }
}
//Audity Ghosh
