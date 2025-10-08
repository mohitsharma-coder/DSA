class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int n= digits.size();
            if(digits[n-1]!=9)    // if last digit is not eqaul to 9 then simple add +1
            {
                digits[n-1]=digits[n-1]+1;
                return digits;
            }
    
            digits[n-1]=0;       //else if last value is 9 then +1 we get 10 so lst 0 

            for(int i=n-2;i>=0;--i)   //check second last is equal to 9 or not if yes +1
            {
                if(digits[i]!=9){
                    digits[i]=digits[i]+1;
                    return digits;
                }
                digits[i]=0; 
            }
        
            vector<int> ans(n + 1, 0);  //if all number is zero than at first index 1
            ans[0]=1;
            return ans;
        }
};