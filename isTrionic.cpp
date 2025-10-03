class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<4){
            return false;
        }
        for(int i=0;i<n;i++){
            int p=i+1;
            for(int j=i+1;j<n;j++){
                int q=j+1;
                if(p>=n-2 || q>=n-1){
                    continue;
                }
                 bool inc1 = true, dec = true, inc2 = true;
                for(int k=0;k<p;k++){
                    if(nums[k]>=nums[k+1]){
                        inc1=false;
                        break;
                    }
                }
                for(int k=p;k<q;k++){
                    if(nums[k]<=nums[k+1]){
                        dec=false;
                        break;
                    }
                }
                for(int k=q;k<n-1;k++){
                    if(nums[k]>=nums[k+1]){
                        inc2=false;
                        break;
                    }
                }
                if(inc1 && dec && inc2){
                    return true;
                }
            }
        }
        return false;
    }
};
