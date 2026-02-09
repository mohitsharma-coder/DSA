class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string result = "";

        while(i<word1.size() && j<word2.size()){
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }
        //when word2 string khtm tata bye bye
        while(i<word1.size()){
            result += word1[i];
            i++;
        }
        //when word1 string khtm tata bye bye 
        while(j<word2.size()){
            result += word2[j];
            j++;
        }
        return result;
    }
};