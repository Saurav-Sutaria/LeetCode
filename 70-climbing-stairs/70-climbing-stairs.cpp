class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        //using recursion
        //it will give TLE
        // if(n <= 2) return n;
        // else return climbStairs(n-1) + climbStairs(n-2);
        
        //using DP
        vector<int> steps(n+1,0);
        steps[0] = 0; steps[1] = 1; steps[2] = 2;
        for(int i=3;i<=n;i++){
            steps[i] = steps[i-1] + steps[i-2];
        }
        return steps[n];
    }
};