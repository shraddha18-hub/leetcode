class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jmp = 0;
        int pos = 0;
        int des = 0;
        if(nums.size()==1)
        {
            return 0;
        }
        if(nums[0]==0)
        {
            return -1;
        }
        for(int i=0; i<=nums.size()-1;i++)
        {
            des = max(des, nums[i]+i);

            if(pos == i)
            {
                pos = des;
                jmp++;

                if(pos>=nums.size()-1)
                {
                    return jmp;
                }
            }
        }
        return -1;
    }
};