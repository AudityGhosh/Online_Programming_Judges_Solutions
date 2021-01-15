/*Problem Link: https://www.spoj.com/problems/FACEFRND/en/
input:
3
2334 5 1256 4323 7687 3244 5678
1256 2 2334 7687
4323 5 2334 5678 6547 9766 9543
output:
6

*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i,j,k,m,number_of_friends,number_of_his_friend;

    cin>>number_of_friends;
    vector<ll>friends(number_of_friends);
    set<ll>friend_of_friend;
    for(i=0; i<number_of_friends; i++)
    {
        cin>>friends[i];
        cin>>number_of_his_friend;
        for(j=0; j<number_of_his_friend; j++)
        {
            cin>>k;
            friend_of_friend.insert(k);
        }
    }
    for(i=0; i<friends.size(); i++)
    {
        if(friend_of_friend.find(friends[i])!=friend_of_friend.end())
        {
            friend_of_friend.erase(friends[i]);
        }
    }
    cout<<friend_of_friend.size()<<endl;

}
//Audity Ghosh
