#include<iostream>

using namespace std;

int main()
{
    int n,k=0,temp,flag=0,arr[20];
    cin>>n;
    for(int i=4 ; i<=n ; i++)
    {
        flag=0;
        temp=i;
        while(temp)
        {
            if(temp%10==4 || temp%10==7)
            {
                temp/=10;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            arr[k++]=i;
        }
    }
    flag=0;
    for(int i=0 ; i<k ; i++)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"NO";
    return 0;
}
