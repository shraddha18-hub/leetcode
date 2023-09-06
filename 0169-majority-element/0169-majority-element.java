class Solution {
    public int majorityElement(int[] nums) {
       
        int majority = nums[0];
        int vote = 0;
        for(int i=0;i<nums.length;i++)
        {
          if(vote==0)
          {
              majority = nums[i];
              vote = 1;
          }
          else if(majority == nums[i])
          {
              vote++;
          }
          else
          {
              vote--;
          }
        }
        return majority;
    }
}