#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],prefix[n+1];
		for(int i=0;i<n;i++)
		   cin>>a[i];
		prefix[0]=0; prefix[1]= a[0];
		for(int j=1;j<n;j++)
			prefix[j+1]=prefix[j]+a[j];
		int Q;
		cin>>Q;
		while(Q--)
		{
			int L,R;
			cin>>L;
			cin>>R;
			if(L>0)
				cout<<prefix[R]-prefix[L-1];
			else
				cout<<prefix[R];
		}
	}
	return(0);
}

