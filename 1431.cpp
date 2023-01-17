class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> ans;int max = 0;
        for (int i=0;i<candies.size();i++){
                max = std::max(candies[i],max);
        }
        for (int i=0;i<candies.size();i++){
            if (extraCandies + candies[i] >= max){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }   
};
