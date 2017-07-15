#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long c=0;

    if(n>=1 && n<=5)
        cout<<"1";
    else if(n>5 && n%5==0)
        cout<<n/5;
    else if(n>5 && n%5!=0)
    {
        long a=n%5;
        long r=n-a;
        cout<<(r/5)+1;
    }

    //cout<<c;
    return 0;
}
