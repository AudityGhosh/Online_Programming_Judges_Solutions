//problem link: https://codeforces.com/contest/1494/problem/A
//replace A, B,C with parathesis and check if they are valid


#include<bits/stdc++.h>
using namespace std;
//function to check if parathesis are valid
bool areBracketsBalanced(string expr)
{
    stack<char> s;
    char x;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
                || expr[i] == '{')
        {

            s.push(expr[i]);
            continue;
        }


        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':


            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':


            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':


            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return (s.empty());
}
int main()
{
    int i,j,k,m,n,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        k=0;
        string temp="";
        if(s[0]=='A') //if it starts with A , A must be replaced with opening brackets
        {
            //A=(  B = ) C = )
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='A')
                    temp=temp+'(';
                else if(s[i]=='B')
                    temp=temp+')';
                else
                    temp=temp+')';
            }
            if(areBracketsBalanced(temp))
            {
                k++;
            }
            else
            {
                temp="";
                //A=(  B = ( C = )
                for(i=0; i<s.size(); i++)
                {
                    if(s[i]=='A')
                        temp=temp+'(';
                    else if(s[i]=='B')
                        temp=temp+'(';
                    else
                        temp=temp+')';
                }
                if(areBracketsBalanced(temp))
                {
                    k++;
                }
                else
                {
                    temp="";
                    //A=(  B = ) C = (
                    for(i=0; i<s.size(); i++)
                    {
                        if(s[i]=='A')
                            temp=temp+'(';
                        else if(s[i]=='B')
                            temp=temp+')';
                        else
                            temp=temp+'(';
                    }
                    if(areBracketsBalanced(temp))
                    {
                        k++;

                    }


                }

            }
        }
        else if(s[0]=='B')
        {
            //A=)  B = ( C = )
         for(i=0; i<s.size(); i++)
            {
                if(s[i]=='B')
                    temp=temp+'(';
                else if(s[i]=='A')
                    temp=temp+')';
                else
                    temp=temp+')';
            }
            if(areBracketsBalanced(temp))
            {
                k++;
            }
            else
            {
                temp="";
                 //A=(  B = ( C = )
                for(i=0; i<s.size(); i++)
                {
                    if(s[i]=='B')
                        temp=temp+'(';
                    else if(s[i]=='A')
                        temp=temp+'(';
                    else
                        temp=temp+')';
                }
                if(areBracketsBalanced(temp))
                {
                    k++;
                }
                else
                {
                    temp="";
                     //A=)  B = ( C = (
                    for(i=0; i<s.size(); i++)
                    {
                        if(s[i]=='B')
                            temp=temp+'(';
                        else if(s[i]=='A')
                            temp=temp+')';
                        else
                            temp=temp+'(';
                    }
                    if(areBracketsBalanced(temp))
                    {
                        k++;

                    }


                }

            }
        }
        else
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='C')
                    temp=temp+'(';
                else if(s[i]=='B')
                    temp=temp+')';
                else
                    temp=temp+')';
            }
            if(areBracketsBalanced(temp))
            {
                k++;
            }
            else
            {
                temp="";
                for(i=0; i<s.size(); i++)
                {
                    if(s[i]=='C')
                        temp=temp+'(';
                    else if(s[i]=='B')
                        temp=temp+'(';
                    else
                        temp=temp+')';
                }
                if(areBracketsBalanced(temp))
                {
                    k++;
                }
                else
                {
                    temp="";
                    for(i=0; i<s.size(); i++)
                    {
                        if(s[i]=='C')
                            temp=temp+'(';
                        else if(s[i]=='B')
                            temp=temp+')';
                        else
                            temp=temp+'(';
                    }
                    if(areBracketsBalanced(temp))
                    {
                        k++;

                    }


                }

            }
        }
        if(k==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
//AudityGhosh
