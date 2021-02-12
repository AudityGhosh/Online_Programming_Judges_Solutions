/*problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=976
input:
123 456
555 555
123 594
0 0
output:
No carry operation.
3 carry operations.
1 carry operation.
 count of carry if addition result is more than 9
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,m;

    int num1,num2;
    while(true)

    {
        cin>>num1>>num2;
        if(!num1 && !num2)
            break;

        int carry=0,c=0;
        while (num1 || num2)
        {
            int rem_a=num1%10;
            num1/=10;
            int rem_b=num2% 10;
            num2/=10;

            int result = rem_a + rem_b + c;
            if (result>9)
            {
                c=1;
                carry++;
            }
            else
                c=0;
        }
        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;
    }
}
//Audity Ghosh
