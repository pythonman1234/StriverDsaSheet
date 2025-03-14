class Solution {

private:
int check(vector<int>&nums,int mid,int threshold){
    int TotalSum=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%mid==0) TotalSum+=(nums[i]/mid);
        else TotalSum+=(nums[i]/mid)+1;
        if(TotalSum>threshold) break;
    }
    return TotalSum;
}
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=nums[0];
        for(int i;i<nums.size();i++){
            maxi=max(maxi,nums[i]);

        }
        int low=1,high=maxi;
        while(low<=high){
            int mid = (low+high)/2;
            int val = check(nums,mid,threshold);
            if(val<=threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
