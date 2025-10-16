class Solution {
public:
    int maxPower(string s) {
        int count = 1; 
        int maximum = 1;

        for(int i = 1; i<s.size();i++){
            
            if(s[i-1]==s[i])
                count ++;
            else{
                maximum = max(count,maximum);
                count = 1;
            }
        }
       maximum = max(count,maximum);
            return maximum;               //return count WRONG
    }
};