class Solution {

public:
    int findMaxLength(vector<int>& arr) {
        
        
        map<int,int> mp;
        int sum=0;
        int longest_subarray=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)
                sum+=-1;
            else if(arr[i]==1)
                sum+=1;
            
            if(sum==0){
                if(longest_subarray<i+1)
                    longest_subarray=i+1;
            }
            else if(mp.find(sum)!=mp.end()){
                if(longest_subarray<(i-mp[sum]))
                    longest_subarray=i-mp[sum];
            }
            else
                mp[sum]=i;
        }
        return longest_subarray;
    
    }
};