class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
        int si = 0;
        int ei = 0;
        int n = nums.size();
        int ans = 0;
        int PrevCount = 0;
        while(ei<n)
        {
            //Case 1 : when element lies in rage between [left,right]//
            if(left<=nums[ei] && nums[ei]<=right)
            {
                PrevCount = ei - si + 1;
                ans += PrevCount;
            }
            
            /*Case 2 : when element < left i.e element does not lie in range it is 
            smaller than left*/
            else if(nums[ei]<left)
            {
                ans += PrevCount;
            }
            
            /* Case 3 : when element > right i.e element doew not lie in range it is 
            greater than right.*/
            
            else
            {
                si = ei + 1;
                PrevCount = 0;
            }
            ei++;
        }
        return ans;
        
    }
};