class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int r = 0;
        int maxPick = 0;
        unordered_map<int,int>freq;

        for(r=0; r<fruits.size(); r++){
            //count frequency for every num
            freq[fruits[r]]++;

            while(freq.size() > 2){
                freq[fruits[l]]--;   // freq kaam karega map m se jha par left pointer hoga

                if(freq[fruits[l]] == 0){          //agr minus krte krte freq 0 ho gyi tho erase
                    freq.erase(fruits[l]);         //agr erase nhi keya tho map m freq.size() = 2 show hogi 
                    }                              //1->0 , 2->1 but actually one type fruit exist hai
                l++;
            }
        maxPick = max(maxPick, r - l + 1);
        }
        return maxPick;
    }
};