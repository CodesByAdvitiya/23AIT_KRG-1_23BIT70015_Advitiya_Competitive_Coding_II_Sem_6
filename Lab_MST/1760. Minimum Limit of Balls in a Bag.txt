class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l =1;
        int r=*max_element(nums.begin(),nums.end());
        while(l<=r){
            int mid=(l+r)/2;
            long long operations=0;
            for(int i:nums){
                operations+=(i-1)/mid;
            }
            if(operations<=maxOperations){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
/* 0(n(log(max(nums))) */