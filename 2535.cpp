class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0; int dig = 0;
        for (int i=0;i<nums.size();i++){
            sum += nums[i];
            while(nums[i]){
                dig += nums[i]%10;
                nums[i]/=10;
            }
        }
        return sum-dig;
    }
};
