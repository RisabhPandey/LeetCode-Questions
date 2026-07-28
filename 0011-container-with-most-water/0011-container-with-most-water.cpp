class Solution {
public:
    int maxArea(vector<int>& height) {
        int width = size(height)-1;
        int st=0;
        int end=size(height)-1;
        int max_cap;
        while(st < end){
            int ht = min(height[st],height[end]);
            int cap = ht*width;
            if(height[st] >= height[end]){
                if(max_cap < cap)
                    max_cap = cap;
                end--;
                width--;
            }
            else{
                 if(max_cap < cap)
                    max_cap =cap;
                st++;
                width--;
            }

        }
        return max_cap;
    }
};