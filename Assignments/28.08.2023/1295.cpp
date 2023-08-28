class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ctr=0;
        for(int i=0;i<nums.size();i++){
            string x = to_string(nums[i]);
            if(x.length()%2==0){
                ctr++;
            }
        }
        return ctr;
    }
};