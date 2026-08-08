class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        double maxEle = *max_element(salary.begin(), salary.end());
        double minEle = *min_element(salary.begin(), salary.end());
        int n = salary.size();

        for(int i=0 ; i<n; i++){
            sum += salary[i];
        }
        sum = sum - (maxEle + minEle);

        double avg = sum / (n-2);
        return avg;
    }
};