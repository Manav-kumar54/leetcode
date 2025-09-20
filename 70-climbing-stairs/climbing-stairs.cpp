class Solution {
public:
    int climb(int step, int n, vector<int>&dp){
        if(step==0){
            return 1;
        }
        if(step<0){
            return 0;
        }
        if(dp[step]!=-1){
            return dp[step];
        }
        
        return dp[step]=climb(step-1,n,dp)+climb(step-2,n,dp);

    }

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climb(n,n,dp);
        
    }
};