

class Solution {
 //   public:
    vector<vector<int>> result;
    private:
    void findcombinations(int ind, vector <int> &arr, int target, vector<int>ds)
    {
         if(target == 0)
          {
            result.push_back(ds);
          }
          
        else if(target>0)
        {
             for(int i=ind;i<arr.size();i++){
                if (i > ind && arr[i] == arr[i - 1]) {
                    continue;
                }
            ds.push_back(arr[i]);
            findcombinations(i+1,arr,target - arr[i], ds);
            ds.pop_back();
        }
         //findcombinations(ind+1,arr,target, ans, ds);
        
    }
    }
    public:
   vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        //vector<vector<int>>result;
       vector<int> ans;
        findcombinations(0, candidates, target, ans);
        return result;
        
    }
};