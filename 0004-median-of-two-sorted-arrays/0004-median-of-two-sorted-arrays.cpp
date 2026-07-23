class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = size(nums1);
        int n2 = size(nums2);
        int n = n1 + n2;
        double med;
        int i= 0,j=0,k=0;

        vector<int> nums3(n);
            
            while(i < n1 && j < n2){
            if(nums1[i] <=  nums2[j]){
                nums3[k] = nums1[i];
                i++;
                k++;
            }
            else{
                nums3[k] = nums2[j];
                j++;
                k++;
            }
            }
            while(i < n1){
                nums3[k] = nums1[i];
                i++;
                k++;
            }
            while(j < n2){
                nums3[k] = nums2[j];
                j++;
                k++;
            }
        if(n%2 == 0){
            int m1 = n/2;
            int m2 = (n/2)-1;

            med = (float(nums3[m1]+nums3[m2]))/2;
        }
        else{
            int m3 = n/2;

            med = nums3[m3];
        }
        return med;
    }
};