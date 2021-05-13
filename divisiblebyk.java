//https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/
import java.util.*;
class divisiblebyk
{
public static void main(String args[])
{
int arr[]={4,5,0,-2,-3,1};
int n=6,k=5,i;
int count=0,prefix=0,rem;
HashMap<Integer,Integer> dic=new HashMap<>();
dic.put(0,1);
for(i=0;i<n;i++)
{
prefix = prefix+arr[i];
rem= prefix%k;
   if(rem<0)
       rem=rem+k;

if(dic.containsKey(rem))
  {
     count= count+dic.get(rem);
    dic.put(rem,dic.get(rem)+1);
   }
    else
     {
       dic.put(rem,1);
     }
}
System.out.println(count);
}
}



