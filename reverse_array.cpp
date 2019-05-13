#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,j,b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0,j=n-1;i<n;i++,j--)
        b[i]=a[j];
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}
