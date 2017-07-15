#include<bits/stdc++.h>

using namespace std;

int main()
{

    int m,n;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>m>>n;
    if(m>n)
    {
        for(int i=0 ; i<n ; i++)
        {
            cout<<"BG";
        }
        for(int i=0 ; i<m-n ; i++)
        {
            cout<<"B";
        }
    }
    else if(n>m)
    {
        for(int i=0 ; i<m ; i++)
        {
            cout<<"GB";
        }
        for(int i=0 ; i<n-m ; i++)
        {
            cout<<"G";
        }
    }
    else
    {
        for(int i=0 ; i<m ; i++)
        {
            cout<<"GB";
        }
    }
    return 0;
}
