class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result = {};
        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break;
            if(i>0 and nums[i]==nums[i-1]) continue;

            int first = nums[i];
            
            int left=i+1;
            int right=nums.size()-1;

            while(left<right){
                if(nums[left]+nums[right]== -nums[i]){
                    
                    result.push_back({nums[i], nums[left], nums[right]});
    
                    left++;
                    right--;
                    while(left<right and nums[left]==nums[left-1]){
                        left++;
                    }

                }
                else if(nums[left]+nums[right] < -nums[i]){
                    left++;
                }
                else{
                    right--;
                }

            }
            
        }
        
        return result;
    }
};



// -4 -1 -1 0 1 2


// -2 -1 0 1 2 3 




