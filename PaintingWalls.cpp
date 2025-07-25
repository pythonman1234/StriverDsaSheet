class Solution{
    public:

    bool isPossible(vector<int>&arr,int n , int m,int MaxAllowedTime){
     int painters = 1, time = 0;

     for(int i=0;i<n;i++){
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }else{
            painters++;
            time=arr[i];
        }
     }
     return painters<=m;
    }
    int minTimeToPaint(vector<int>&arr,int n,int m){
        int sum = 0 , maxVal = INT_MIN;
        for(int i = 0;i<n;i++){
            sum+=arr[i];
            maxVal = max(maxVal,arr[i]);

        }
        int st = maxVal , end = sum , ans = -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(isPossible(arr,n,m,mid)){ // left
                ans = mid;
                end = mid-1;
                else{
                    // right
                    st = mid+1;
                }

            }
            return ans;
        }
    }
int main(){
    vector<int>arr = {40,30,20,10};
    int n = 4, m =2;

    cout<<minTimeToPaint(arr,n,m)<<endl;

    return 0;
}
}

// time complexity ---> O(log(sum)*n)
