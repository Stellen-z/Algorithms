class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> ret;
        int n = nums.size();
        for(int i = 0;i < (1 << n);i++)
        {
            //循环判断每一位
            vector<int> tmp;
            for(int st = 0;st < n;st++)
            {
                if((i >> st) & 1) tmp.push_back(nums[st]); 
            }
            ret.push_back(tmp);
        }    

        return ret;
    }
};
