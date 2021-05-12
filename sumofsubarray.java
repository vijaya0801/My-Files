import java.util.*;
class sumofsubarray
{
public static void main(String args[])
{
int n=6,k=5,i;
int a[]={4,5,0,-2,-3,1};
//int a[]={1,2,3};
HashMap<Integer,Integer> m=new HashMap<>();
int prefix=0;int count=0;
m.put(0,1);
for(i=0;i<n;i++)
{
prefix=prefix+a[i];
if(m.containsKey(prefix-k))
{
    count=count+m.get(prefix-k);
 }

m.put(prefix,m.getOrDefault(prefix,0)+1);
}
System.out.println(count);
}
}