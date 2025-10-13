class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size()-1;
        // skip the space
        while(i>=0 && s[i]==' ')
        i--;
        // count the character 
        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }
        return count;
    }
};