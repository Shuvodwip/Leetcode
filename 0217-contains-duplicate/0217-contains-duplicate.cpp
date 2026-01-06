class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> counts;
        
        for (int num:nums) {
            counts[num]++;
        }

        // Print the results
        for (const auto& a : counts) {
            if (a.second > 1){
                return true;
            }
        }
        return false;
    }
};