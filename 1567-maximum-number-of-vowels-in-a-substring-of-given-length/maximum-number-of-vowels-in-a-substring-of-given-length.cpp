class Solution {
public:
bool isVowel(char ch){
    return ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u';
}
    int maxVowels(string s, int k) {
        
        int left = 0;
        int right = 0;
        int vowelCount = 0;
        int windowSize = 0;
        int maxVowel = 0;

        for(right = 0; right<s.size();right++){
            windowSize++;
            //agr right wale pointer indx par vowel 
            if(isVowel(s[right]))
            vowelCount++;

            while(windowSize>k){
                //agr left wale pointer par vowel ho
                if(isVowel(s[left]))
                vowelCount--;
                left++;
                windowSize--;
            }
            maxVowel = max(maxVowel,vowelCount);  
        }
        return maxVowel;
    }
};