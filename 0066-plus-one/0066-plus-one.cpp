class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        if(digits[n] != 9){
            digits[n] += 1;
            return digits;
        }
        digits[n] = 0;
        for(int i = n-1; i>=0; i--){
            
            if(digits[i]!=9){
                digits[i]+=1;
                return digits;
            }
            else{
                digits[i] =0;
            }
        }
    digits.insert(digits.begin(), 1);
    return digits;
    
    }
};