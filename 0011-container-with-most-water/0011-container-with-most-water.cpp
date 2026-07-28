class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int st=0;
        int end=size(height)-1;
        int max_cap =0;

        while(st < end){
            int ht = min(height[st],height[end]);
            int width = end - st;
            int cap = ht*width;
            if(height[st] < height[end]){
                if(max_cap < cap)
                    max_cap = cap;
                st++;
                
            }
            else{
                 if(max_cap < cap)
                    max_cap =cap;
                end--;
            
            }
        }
        return max_cap;
    }
};