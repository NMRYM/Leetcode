class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {

        
        long long req = (brightness+2)/3;
        

        sort(intervals.begin(), intervals.end());

        long long time = 0;
        if(intervals.empty()){
            return 0;
        }

        int cur_start = intervals[0][0];
        int cur_end = intervals[0][1];

        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] <= cur_end) {
                cur_end = max(cur_end, intervals[i][1]);
            } else {
                
                time += (cur_end - cur_start + 1);
                cur_start = intervals[i][0];
                cur_end = intervals[i][1];
            }
        }

        time += (cur_end - cur_start + 1);

        return req * time;




    }
};