#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        map<char,int>mp;
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        int len=INT_MIN;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            len=max(len,it->second);
        }
        if(len*2<=str.size()+1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
	return 0;
}
