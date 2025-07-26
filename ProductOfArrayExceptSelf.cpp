class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,1);

        

        for(int i=1;i<n;i++){
            //prefix[i] = prefix[i-1]*nums[i-1]; it will take extra space
            ans[i] = ans[i-1]*nums[i-1]; // directly storing in ans array
        }
         int suffix = 1;
        for(int i = n-2;i>=0;i--){
            // ans[i] = ans[i+1]*nums[i+1]; // prefix already stored in it
            suffix *=nums[i+1];
            ans[i]*=suffix;

        }
        return ans;

    }
};
