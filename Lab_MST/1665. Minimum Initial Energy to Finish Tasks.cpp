class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),[](vector<int>& a,vector<int>& b){
            return (a[1]-a[0])>(b[1]-b[0]);
        });
        int energy=0,ans=0;
        for(auto &i:tasks){
            int actual=i[0];
            int mini=i[1];
            if(energy<mini){
                ans += mini-energy;
                energy = mini;
            }
            energy -= actual;
        }
        return ans;
    }
};