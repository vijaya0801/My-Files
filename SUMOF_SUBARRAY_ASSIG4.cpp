//count the sub arrays whose sum is equal to zero or k
#include <iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main() 
{
	int n,k,i;
	cin>>n;
	int a[n];
	map<int,int>dic;
	int count=0;
	dic.insert({0,1});
	int prefix=0;
//	for(auto i:arr)
    for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
	{
	    prefix+=a[i];		//prefix+=i;
	   
	    if(dic.find(prefix-k)!=dic.end())
	    {
	        count+=dic[prefix-k];
	    }
	    dic[prefix]+=1;
	}
	cout<<count;
	return 0;
}
