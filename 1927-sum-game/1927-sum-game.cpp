class Solution {
public:
    bool sumGame(string num) {
        int sum_front =0, sum_back =0, l = 0, h = num.length()-1;
        int q2=0,q1=0;

        while(l<h){
          

            if(num[l] == '?') q1++;
            else sum_front += num[l] -'0';
            if(num[h] == '?') q2++;
            else sum_back += num[h] -'0';

            l++;
            h--;
        }

if ((q1 + q2) % 2 != 0) return true;


        return (sum_front - sum_back) * 2 != (q2 - q1) * 9;
    }
};