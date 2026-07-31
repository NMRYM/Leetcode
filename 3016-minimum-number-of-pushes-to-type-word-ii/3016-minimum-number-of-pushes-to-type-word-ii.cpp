class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(char c : word){
            freq[c-'a']++;
        }

        int unique = 0;
        for(int i =0 ; i < 26;i++){
            if(freq[i] >0){
                unique++;
            }
        }

        if(unique < 9){
            return word.size();
        }
        sort(freq.rbegin(), freq.rend());

        int sum = 0;

        for (int i = 0; i < unique; i++) {
            
            int multiplier = (i / 8) + 1;
            sum += freq[i] * multiplier;
        }
        return sum;

    }
};