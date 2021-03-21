class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        if(num.size()<=0) return vector<vector<int>>();
        sort(num.begin(),num.end());
        vector<vector<int>> result;
        vector<int>res;
        vector<bool> used(num.size(),false);
        dfs(result,res,num,used,num.size());
        return result;
    }
    void dfs(vector<vector<int>> &result,vector<int> &res,vector<int> num,vector<bool> &used,int n){

        if(n==0){
            result.push_back(res);
            return;
        }
        for(int i=0;i<num.size();i++){
            if(used[i]==false){
                used[i]=true;
                res.push_back(num[i]);
                dfs(result,res,num,used,n-1);
                res.pop_back();
                used[i]=false;
            }
        }
    }
}
