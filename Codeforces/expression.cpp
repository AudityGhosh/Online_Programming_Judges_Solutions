/*problem link: http://codeforces.com/contest/479/problem/A
input:
2 10 3
output:
60*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    vector<int>val;
    cin>>a>>b>>c;
    val.push_back(a+b+c);
    val.push_back(a*b*c);
    val.push_back(a*(b+c));
    val.push_back(a+(b*c));
    val.push_back((a*b)+c);
    val.push_back((a+b)*c);
    sort(val.begin(),val.end());
    cout<<val[val.size()-1]<<endl;

}
//AudityGhosh
