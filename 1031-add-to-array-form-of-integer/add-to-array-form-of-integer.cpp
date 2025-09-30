class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for(int i = num.size()-1;i>=0;i--){
            num[i]=num[i]+k; //add num value to k
            k=num[i]/10; //for carry 
            num[i]=num[i]%10; //jo index hoga usme add keya hua num jayega 
        }
        while(k>0){
            num.insert(num.begin(),k%10);//insert in front when carry left
            k=k/10; //for stoping loop
        }
        return num; 
    }
};