class Solution {
public:
    int climb(int step, int n, vector<int>&dp){
        if(step==n){
            return 1;
        }
        if(step>n){
            return 0;
        }
        if(dp[step]!=-1){
            return dp[step];
        }
        
        return dp[step]=climb(step+1,n,dp)+climb(step+2,n,dp);

    }
    int climbStairs(int n) {
        vector<int>dp(n,-1);
        return climb(0,n,dp);
        
    }
};