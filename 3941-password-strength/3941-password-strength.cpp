class Solution {
public:
    int passwordStrength(string password) {
        int strength = 0;
        vector<int> freq(256,0);

        for(int i =0 ; i < password.length() ; i++){
            freq[password[i]]++;

            if(freq[password[i]] == 1){
                if(password[i] - 'a' >=0 && password[i] - 'a' < 26){
                    strength += 1;
                }else if(password[i] >='A' && password[i] <= 'Z'){
                    strength += 2;
                }else if(password[i] - '0' >= 0 && password[i] -  '0' <=9){
                    strength += 3;
                }else{
                    strength += 5;
                }
            }
        
        }
        return strength;
    }
};