class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count = 1;
        vector<int> ans;
        int j = 1;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size()-1; i++){
            if(arr[i] == arr[j]){
                j++;
                count++;
                continue;
            }
            // ans.push_back(count);
            else if(arr[i] != arr[j]){
                ans.push_back(count);
                j += 1;
                count = 1;
                continue;
            }
            ans.push_back(count);
            count = 1;
        }
        ans.push_back(count);
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size()-1; i++){
            if(ans[i] == ans[i+1]){
                return false;
            }
        }
        return true;
    }
};