class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> M;
        for(int i = 0;i < nums.size(); i++){
            M.push_back({nums[i], i});
        }

        sort(M.begin(), M.end());

        int l = 0, r = nums.size() - 1;
        
        while(l < r){
            int sum = M[l].first + M[r].first;
            if(sum == target){
                return {min(M[l].second, M[r].second), 
                        max(M[l].second, M[r].second)};
            }
            else if(sum < target){
                l++;
            }
            else{
                r--;
            }
        }
        return {};
    }
};
