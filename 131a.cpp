#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,flag=0;
    if(s.length()==1)
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]-='z'-'Z';
            cout<<s;
        }

        else
            cout<<s;
    }
    else if(s.length()>1 && s[0]>='a' && s[0]<='z')
    {
        for(i=1 ; i<s.length() ; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                continue;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<s;
        else
        {
            s[0]-='z'-'Z';
            for(i=1 ; i<s.length() ; i++)
            {
                s[i]+='z'-'Z';
            }
            cout<<s;
        }
    }
    else if(s.length()>1 && s[0]>='A' && s[0]<='Z')
    {
        flag=0;
        for(i=1 ; i<s.length() ; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                continue;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(i=0 ; i<s.length() ; i++)
            {
                s[i]+='z'-'Z';
            }
            cout<<s;
        }
        else
            cout<<s;
    }
    else
        cout<<s;
    return 0;
}
