class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // maximum candies kiske pass hai 
        int max = candies[0];
        for(int i = 1; i<candies.size();i++){
            if(candies[i]>max){
                max = candies[i];
            }
        }
        // compare 
        vector<bool>result;
        for(int j = 0 ; j<candies.size(); j++){
            
            if(candies[j]+extraCandies>=max)
            result.push_back(true);
            else{
            result.push_back(false);
            }
    }
    return result;
    }
};