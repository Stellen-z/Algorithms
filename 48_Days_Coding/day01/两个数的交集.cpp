class Solution {
public:
	/**
	 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	 *
	 * 
	 * @param nums1 int整型vector 
	 * @param nums2 int整型vector 
	 * @return int整型vector
	 */
	
	bool hash[1010];
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
	{
		vector<int> ret;
		for(auto e : nums1)
		{
			hash[e] = true; 
		}
		
		for(auto e : nums2)
		{
			if(hash[e] == true)
			{
				ret.push_back(e);
				hash[e] = false; // 加入之后直接删除，即可防止重复push
			}
		}
		
		return ret;
		
	}
};
