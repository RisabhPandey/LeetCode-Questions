class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>freq(26,0);
        for(int i= 0;i<words.size();i++){
            string w = words[i];

            for(int j=0; j<w.size();j++){
                char ch = w[j];
                int idx = (int)(ch-'a');

                freq[idx] = freq[idx]+1;
            }
        }
        for(int i= 0; i<freq.size();i++){
            if(freq[i] % words.size() != 0){
                return false;
            }
        }
        return true; 
    }
};