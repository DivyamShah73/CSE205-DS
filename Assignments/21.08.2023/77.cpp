class Solution {
private:
    void solve(int idx, int n, int k, vector<int> &output, vector<vector<int>> &ans) {
        // base case
        if (k == 0) {
            ans.push_back(output);
            return; // Return after adding the output
        }
        if (idx > n) {
            return; // Return when index goes beyond n
        }
        // include idx
        output.push_back(idx);
        solve(idx + 1, n, k - 1, output, ans);
        // exclude idx
        output.pop_back();
        solve(idx + 1, n, k, output, ans);
    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> output;
        vector<vector<int>> ans;
        int idx = 1;
        solve(idx, n, k, output, ans);
        return ans;
    }
};
