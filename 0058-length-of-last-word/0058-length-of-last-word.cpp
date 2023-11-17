class Solution {
public:
    int lengthOfLastWord(string s) {
        
         int n  = s.size();
        int ans = 0;
        int prev = 0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(ans!=0){
                    prev = ans;
                }
                ans = 0;
            }
            else{
                ans++;
            }
        }
        if(ans == 0){
            return prev;
        }
        return ans;
    }
    
};