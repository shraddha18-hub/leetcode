class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        int len = num.size();
        int i = len-1;
        while(i>0){
            if(num[i] > num[i-1]) break;
            i--;
        }
        if(i==0) return -1;
        reverse(num.begin()+i, num.end());
        int j = i-1;
        while(i<len){
            if(num[j] < num[i]){
                swap(num[j], num[i]);
                break;
            }
            i++;
        }
        double ans = stod(num);
        if(ans > INT_MAX) return -1;
        return (int)ans;
    }
};