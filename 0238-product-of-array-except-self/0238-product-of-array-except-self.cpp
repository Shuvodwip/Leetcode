class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int mult=1, index;

        int zero_count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero_count++;
                index = i;
            } 
            else mult *= nums[i];
        }

        fill(res.begin(), res.end(), 0);

        if(zero_count > 1) return res;
        else if(zero_count==1){
            res[index]=mult;
        }
        else{
            for(int i=0;i<n;i++){
                res[i] = mult/nums[i];
            }
        }
        return res;
    }
};
