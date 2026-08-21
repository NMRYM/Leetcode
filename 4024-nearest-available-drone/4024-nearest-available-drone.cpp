class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int min_dis=INT_MAX, dis=0,min_idx=-1;

        for(int i = 0 ; i <drones.size();i++){
            dis =abs( target[0] - drones[i][0])+abs(target[1]-drones[i][1]);
            if(dis <= drones[i][2] && dis < min_dis){
                min_dis=dis;
                min_idx = i;
            }

        }

        return min_idx;
    }
};