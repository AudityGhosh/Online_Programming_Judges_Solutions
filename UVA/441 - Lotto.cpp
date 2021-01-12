/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=382
input:
7 1 2 3 4 5 6 7
0
output:
1 2 3 4 5 6
1 2 3 4 5 7
1 2 3 4 6 7
1 2 3 5 6 7
1 2 4 5 6 7
1 3 4 5 6 7
2 3 4 5 6 7
Explanation:
You are given k, and you will have to write all possible combinations kC6
You have to print an endline between every testcase, that's why, I used c,don't print extra space after last number of each combination
two functions printcomb and recur has been taken from geeksforgeeks
*/




#include<bits/stdc++.h>
using namespace std;
#define ll long long
void printcomb(ll a[], ll comb[],ll First, ll Last,ll Index, ll r)
{

    if (Index == r)
    {
        cout<<comb[0];
        for (ll j = 1; j < r; j++)
            cout <<  " "<<comb[j];
        cout << endl;
        return;
    }
    for (ll i = First; i <= Last &&  Last - i + 1 >= r - Index; i++)
    {
        comb[Index] = a[i];
        printcomb(a, comb, i+1, Last, Index+1, r);
    }
}

void recur(ll a[], ll n, ll r)
{
    ll comb[r];
    printcomb(a, comb, 0, n-1, 0, r);
}

int main()
{
    ll i,j,k,m,n,t,c=0;
    while(true)
    {
        cin>>k;
        if(k==0)
            break;
        else
        {
            c++;
            if(c!=1)
                cout<<endl;

            ll a[k];
            for(i=0; i<k; i++)
                cin>>a[i];
            recur(a,k,6);




        }
    }
}
//Audity Ghosh
