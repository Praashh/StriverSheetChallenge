class Solution {
public:
    void helper(int ind, vector<int>&ds, vector<vector<int>>&ans, vector<int>&arr){
        if(ind == arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        helper(ind+1,ds,ans,arr);
        ds.pop_back();
        helper(ind+1,ds,ans,arr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        helper(0,ds,ans,nums);
        return ans;
    }
};
