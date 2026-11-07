//int index = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
int lowerBound(vector<int> arr,int n,int x)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        //maybe an answer
        if(arr[mid]>=x)
        {
            ans=mid;
            //look for more small index on left
            high=mid-1;
        }
        else
        {
            low=mid+1;//look for right
        }
    }
    return ans;
}
