class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>nge(n);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--)
        {
            int ele = nums[i%n];
            while(!st.empty() && st.top()<=ele)
            {
               st.pop();
             }
            if(i<n)
            {
                if(!st.empty())
                {
                   nge[i] = st.top();
                }
                else
                {
                    nge[i] = -1;
                }
            }
             st.push(nums[i%n]);
        }
       
        return  nge;
    }
};