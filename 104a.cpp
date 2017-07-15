#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n-10;
    if(a==0)
        cout<<"0";
    else if(a>=1 && a<=9)
        cout<<"4";
    else if(a==10)
        cout<<"15";
    else if(a==11)
        cout<<"4";
    else
        cout<<"0";
    return 0;
}
