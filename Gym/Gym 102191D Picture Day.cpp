/*problem link: https://codeforces.com/gym/102191/problem/D
Input:
8
1 3
4 2
6 7
5 7

output:
1 3 5 7 7 6 4 2(first increasing , then decreasing)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n,t;
    scanf("%d",&t);
    t=t/2;
    vector<pair<int,int>>a;
    for(i=0;i<t;i++)
    {
        int x,y;
     scanf("%d%d",&x,&y);
     if(x>y)
        swap(x,y);
     a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end());
    vector<pair<int,int>>first_part,second_part;
    k=0;
    for(i=0;i<t;i++)
    {
        if(first_part.empty()||first_part.back().second<=a[i].first)
            first_part.push_back(make_pair(a[i].first,a[i].second));
            else if(second_part.empty()||second_part.back().second<=a[i].first)
            second_part.push_back(make_pair(a[i].first,a[i].second));
            else
            {
                k++;
                break;
            }

    }
    if(k!=0)
        printf("-1\n");
   else
   {
       for(pair<int,int>myit:first_part)
        printf("%d %d ",myit.first,myit.second);
       reverse(second_part.begin(),second_part.end());
       for(pair<int,int>myit:second_part)
        printf("%d %d ",myit.second,myit.first);
        printf("\n");

   }
}
//Audity Ghosh
