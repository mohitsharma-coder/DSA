class Solution {
public:
    int bulbSwitch(int n) {
         int count = 0;
         int i = 1;                                 //not index

         while(i * i <= n) //for perfect square
         {     
            count ++;
            i ++;
         }
         return count;
    }
};