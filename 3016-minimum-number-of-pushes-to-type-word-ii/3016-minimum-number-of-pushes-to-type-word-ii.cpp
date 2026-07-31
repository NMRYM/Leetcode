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
            return word.length();
        }
        sort(freq.rbegin(), freq.rend());

        int sum = 0;

        for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) break;
        sum += freq[i] * (i / 8 + 1);
    }
        return sum;

    }
};