class Solution {
public:
    int climbStairs(int n) {
        int dp[46];
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i){
            for (int step = 1; step <= 2; ++step){
                dp[i] += dp[i - step];
            }
        }
        return dp[n];
    }
};
