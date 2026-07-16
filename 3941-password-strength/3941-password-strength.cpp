class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> distinct_chars(password.begin(), password.end());
        int strength = 0;
        
        for (char c : distinct_chars) {
            if (islower(c)) {
                strength += 1;
            } else if (isupper(c)) {
                strength += 2;
            } else if (isdigit(c)) {
                strength += 3;
            } else {
                strength += 5; 
            }
        }
        
        return strength;
    }
};