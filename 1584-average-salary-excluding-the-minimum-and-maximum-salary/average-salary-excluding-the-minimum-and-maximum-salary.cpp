class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];
        int min = salary[0];
        int sum = salary[0];      // you caan write 0 here but then in for loop index strt from 0

        for(int i=1;i<salary.size();i++){
            if(max<salary[i]){
            max = salary[i];}
            if(min>salary[i]){
            min = salary[i];}

            sum = sum + salary[i];
        }
        sum = sum - max - min;
        double ans = (double)sum/(salary.size()-2);  //total index 5 if min and max minusthat why we use -2
        return ans; 

    }
};