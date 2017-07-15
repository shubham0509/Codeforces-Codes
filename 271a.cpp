#include<iostream>

using namespace std;

int main()
{
    int y;
    cin>>y;
    y++;
    int a[10],temp;
    for(int i=0 ; i<10 ; i++)
        a[i]=0;
    for(int i=y ; i<=9013 ; i++)
    {
        int flag=0;
        temp=i;
        for(int i=0 ; i<10 ; i++)
            a[i]=0;
        while(temp)
        {
            a[temp%10]++;
            temp/=10;
        }
        for(int j=0 ; j<10 ; j++)
        {
            if(a[j]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
