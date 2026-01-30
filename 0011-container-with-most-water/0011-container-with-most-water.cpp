class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int vol=0;
        int mult;

        while(l<r){
            if(heights[l]<=heights[r]){
                mult = min(heights[l], heights[r]) * (r-l);

                if(mult>vol) vol=mult;
                l++;
            }
            else{
                mult = min(heights[l], heights[r]) * (r-l);

                if(mult>vol) vol=mult;
                r--;
            }
        }
        return vol;

    }
};
