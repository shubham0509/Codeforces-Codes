#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,half;

    cin>>n>>k;
    //long half=ceil(n/2);
    if(n%2==0)
        half=n/2;
    else
        half=n/2+1;

    //cout<<half<<endl;
    if(k<=half)
    {
        cout<<1+(k-1)*2;
    }
    else
    {
        k=k-half;
        cout<<2+(k-1)*2;
    }

    return 0;
}
