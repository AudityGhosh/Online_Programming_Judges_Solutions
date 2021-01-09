/*
Problem link: https://codeforces.com/gym/102006/problem/B

The hamming distance between two strings of equal length is the number of positions at which the corresponding symbols are different.
What is the maximum possible hamming distance between the two strings you can achieve?

For this , you have to find the current hamming distance by counting unmatched, then you have to counted matched zeros and matched ones,
min(matched_zero,matched_ones)*2 is the additional hamming distance you can add.
So current_hamming_dist+additional_hamming_distance is the final result.
Input should be taken from hamming.in file

Input:
3
4
0101
1001
3
000
101
4
0111
0111

Output:
4
2
2


*/




#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    freopen("hamming.in", "r", stdin);
    ll i,j,k,m,n,t;
    cin>>case;
    while(case--)
    {
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        ll current_hamming_dist=0,matched_zeros=0,matched_ones=0;
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
            {
                current_hamming_dist++;
            }
            else
            {
                if(s1[i]=='0')
                    matched_zeros++;
                else
                    matched_ones++;
            }
        }
        cout<<current_hamming_dist+(min(matched_zeros,matched_ones)*2)<<endl;


    }
}
