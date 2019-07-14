#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s1,s2;
    ll base=30,tot=0;
    vector<ll>v;
    set<ll>st;
    getline(cin,s1);
    stringstream ss(s1);
    while(ss>>s2)
    {
        tot=0;
        for(int i=0;i<s2.size();i++)
        {
            tot+=(tot*base+s2[i])%1000000007;
        }

       v.push_back(tot);
    }

    sort(v.begin(),v.end());
    int ans=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]!=v[i-1])
            ans++;
    }

    cout<<ans<<endl;
}
