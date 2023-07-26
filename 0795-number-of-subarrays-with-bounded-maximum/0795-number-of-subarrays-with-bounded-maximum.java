class Solution {
    public int numSubarrayBoundedMax(int[] nums, int left, int right) {
        int si = 0;
        int ei = 0;
        int n = nums.length;
        int ans = 0;
        int Prevcount=0;
        while(ei<n)
        {
           if(left<=nums[ei]&&nums[ei]<=right)
           {
               Prevcount = ei-si+1;
               ans+=Prevcount;
            }
            else if(nums[ei]<left)
            {
                ans+=Prevcount;
                
            }
            else
            {
              si = ei+1;
                Prevcount =0;
            }
            ei++;
        }
        return ans;
    }
}