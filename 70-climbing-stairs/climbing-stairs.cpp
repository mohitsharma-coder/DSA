class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2 || n==3)
        return n;

        vector<int>t(n+1); //because to hold the value from index 0 to n 

        t[0]=0;
        t[1]=1;
        t[2]=2;

        for(int i =3; i<=n; i++) // for find i we need 1 phle or 2 phle 
        t[i]= t[i-1] + t[i-2];

        return t[n];
    }
};