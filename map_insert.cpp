#include<iostream>
#include<map>
#include<string>

using namespace std;
typedef map<string,int> phonemap;

int main()
{
    string name;
    int num,i,n;
    phonemap p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>name;
        cin>>num;
        p[name]=num;
    }
    while(cin>>name)
    {
            if(p.find(name)!=p.end())
            cout<<name<<"="<<p.find(name)->second;
        else
            cout<<"Not found";
    }
    return 0;
}
