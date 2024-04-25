class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int rem = 0;
        int val;
        digits[digits.size()-1] = digits[digits.size()-1]+1;
        for(int i = digits.size()-1;i>=0;--i){
            val = (digits[i]+rem)%10;
            rem = (digits[i]+rem)/10;
            digits[i] = val;
        }
        if (rem !=0) digits.insert(digits.begin(), rem);
           return digits; 
    }
};