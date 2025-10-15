class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left<right){

            while(left<right && !isalnum(s[left]))//CheckNumisalphanumberic or not
            left++;
            while(left<right && !isalnum(s[right]))
            right--;

            if(tolower(s[left])!=tolower(s[right]))//convertUppercase in lower
            return false;

            left++;
            right--;
        }
        return true;
    }
};