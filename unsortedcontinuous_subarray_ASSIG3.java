class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int L,R,i,max,min,n;
         n=nums.length;
        for(L=0;L<n-1;L++){
            if(nums[L]>nums[L+1])
                break;
        }
       /* if(L==n-1){
            return(0);
        }*/
        for(R=n-1;R>0;R--){
            if(nums[R]<nums[R-1])
                break;
        }  
        max=nums[L];min=nums[L];
        for(i=L+1;i<=R;i++){
            if(nums[i]>max)
                max=nums[i];
            if(nums[i]<min)
                min=nums[i];
        }
        for(i=0;i<L;i++){
            if(nums[i]>min){
                L=i; break;
            }
        }
        for(i=n-1;i>=R+1;i--){
            if(nums[i]<max){
                R=i; break;
            }
        }          
            
        return(R-L>0?R-L+1:(R==L)?L:0);
    }
}