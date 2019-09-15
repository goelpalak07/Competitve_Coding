#include<bits/stdc++.h>
using namespace std;
int main()
{
    int smax,fmax,fmin,smin,n;
    cout<<"enter length of array";
    cin>>n;
    int a[n];
    cout<<"enter array";
    for(int i=0;i<n;i++)
        cin>>a[i];
    smax=fmax=smin=fmin=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>fmax)
        {
            smax=fmax;
            fmax=a[i];
        }
        else if(a[i]>smax)
            smax=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<fmin)
        {
            smin=fmin;
            fmin=a[i];
        }
        else if(a[i]<smin)
            smin=a[i];
    }
    cout<<"Second max ele is "<<smax<<endl;
    cout<<"Second min ele is "<<smin<<endl;
}
