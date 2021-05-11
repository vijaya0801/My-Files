//find the equilibrium index position in the array 

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	//write a logic to creat prefixsum  array 
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1;i<n;i++)
	{
	    prefix[i]=prefix[i-1]+arr[i];
	}
	// to find left hand sum and right hand sum 
	int left_sum=0,right_sum=0,flag=0;
	int eq_index;
	if(n==1)
	{
		 eq_index=1;
		 flag=1;
	}
	else
	{
		for(int i=1;i<n-2;i++)
	{
	    left_sum=prefix[i-1];
	    right_sum=prefix[n-1]-prefix[i];
	    if(left_sum==right_sum)
	    {
	        eq_index=i+1;
	        flag=1;
	        break;
	    }
	}
	}
	if(flag==1)
	{
	    cout<<eq_index;
	}
	else{
	    cout<<-1;
	}
	return 0;
}
