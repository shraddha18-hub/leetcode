class Solution {
    public int firstMissingPositive(int[] nums) {
        
        boolean one = false;
        int n = nums.length;
        
        //Step 1: mark elements which are out of range ans manage presence of 1
        for(int i=0; i<n ; i++)
        {
            if(nums[i]==1)
            {
               one = true;
            }
            if(nums[i]<1 || nums[i]>n)
            {
                nums[i] = 1;
            }
        }
        if(one == false) return 1;
        
        //Step 2: Map the elements with Index
        for(int i=0; i<n; i++)
        {
          int indx = Math.abs(nums[i]);
          nums[indx-1] = - Math.abs(nums[indx-1]);
        }
        for(int i=0; i<n; i++)
        {
            //if element is +ve that means indx + 1 is missing from array
            if(nums[i]>0)
            {
                return i+1;
            }   
        }
         return n+1;
    }
}