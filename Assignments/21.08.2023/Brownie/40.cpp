class Solution {
private:
    void solve(vector<int> candidates, int target,int sum,int idx,vector<int> output,vector<vector<int>>& ans){

            if(sum==target){
                sort(output.begin(),output.end());
                ans.push_back(output);
                return;
            }
            if(sum>target || idx >= candidates.size()){
                return;
            }
        //include
        sum=sum+candidates[idx];
        output.push_back(candidates[idx]);
        solve(candidates,target,sum,idx+1,output,ans);

        while (idx < candidates.size() - 1 && candidates[idx] == candidates[idx + 1])
{
            idx++;
        }
        //exclude
        sum=sum-candidates[idx];
        output.pop_back();
        solve(candidates,target,sum,idx+1,output,ans);



    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int sum=0;
        int idx=0;
        vector<vector<int>> ans;
        vector<int> output;
        solve(candidates,target,sum,idx,output,ans);
       sort(ans.begin(),ans.end());
        vector<vector<int>> ans1(ans);
ans1.erase(unique(ans1.begin(), ans1.end()), ans1.end());


        return ans1;
    }
};