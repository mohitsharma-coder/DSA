class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        return 0;
        else if(n==1||n==2)
        return 1;
        else{
            long firstTerm=0;
            long secondTerm=1;
            long thirdTerm=1;

        for(int i=1;i<=n;i++){
            long fourthTerm= firstTerm + secondTerm + thirdTerm;
            firstTerm=secondTerm;
            secondTerm=thirdTerm;
            thirdTerm=fourthTerm; 
        }
        return firstTerm;
    }
    }
};