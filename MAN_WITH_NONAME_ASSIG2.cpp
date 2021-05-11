#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,prefix=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==-1)
 			 {
  			  a[i]=(int)(prefix/i);
  			 }
  		prefix=prefix+a[i];
		cout<<a[i]<<" ";
		}
		
	}
	return(0);
}
