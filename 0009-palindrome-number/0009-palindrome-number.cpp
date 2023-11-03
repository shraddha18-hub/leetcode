class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0){
           return false;
       }
        
        long long reversenum  = 0;
        long long temp = x;
        while(temp!=0)
        {
         int last = temp % 10;
         reversenum = reversenum * 10 + last;
         temp /= 10;
        }
        
        return(reversenum == x);
    }
};


