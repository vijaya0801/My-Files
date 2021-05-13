//ASSIGNMENT 7 GEEKSFORGEEKS longest-span-with-same-sum-in-two-binary-arrays
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
                        int prefix[n];
            for(int i=0;i<n;i++)
            {
                prefix[i]=arr1[i]-arr2[i];
            }
            map<int,int>dic;
            int sum=0,maxi=0;
            for(int i=0;i<n;i++)
            {
                sum+=prefix[i];
                if(sum==0)
                {
                    maxi=i+1;
                }
                if(dic.find(sum-0)!=dic.end())
                {
                    maxi=max(maxi,i-dic[sum-0]);
                }
                else{
                    dic[sum]=i;
                }
                
            }
            return maxi;
            
            
            
            
    }
};
