class Solution {
public:
    string baseNeg2(int n) {
        if(n == 0) return "0";
        string res = "";

        while(n != 0){

            // if(n%2 == 1){
            // res += '1';}
            // else{
            //     res += '0';
            // }
            // n = n/2;
            int r = n & 1;          // remainder (0 or 1)
            res.push_back('0' + r);
            n = (n - r) / -2;  
        }
        reverse(res.begin(),res.end());
        return res;
    }
};