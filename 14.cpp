class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int mn = INT_MAX,sum=0,s=0;
        for(int e=0;e<nums.size();e++){
            sum+=nums[e];
            while(sum>=target){
                mn=min(mn,(e-s+1));
                sum-=nums[s++];
            }
        }
        if(mn==INT_MAX)return 0;
        return mn;
    }
};