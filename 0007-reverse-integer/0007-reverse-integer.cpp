class Solution {
public:
    int reverse(int x) {
        int reversed =0;
        int temp = x;
        while(temp!=0)
        {
            
            int last = temp % 10;
            if( (reversed > INT_MAX/10) || (reversed < INT_MIN/10))
            {
                return 0;
            }
            reversed = reversed * 10 + last;
            temp /=  10;
        }
        return reversed;
        
    }
};