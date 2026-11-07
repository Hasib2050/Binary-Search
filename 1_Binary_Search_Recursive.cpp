int bs(vector<int>&nums,int low,int high,int target)
{
    if(low>high) return -1;
    //One small improvement: To avoid potential integer overflow, calculate the middle as:
    //int mid = low + (high - low) / 2;
    int mid=(low+high)/2;
    if(nums[mid]== target) return mid;
    else if(target>nums[mid]) return bs(nums,mid+1,high,target);
    return bs(nums,low,mid-1,target);
}
int Search(vector<int>&nums,int target)
{
    return bs(nums,0,nums.size()-1,target);
}
