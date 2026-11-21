class Solution {
public:
	using LL = long long;
	
	bool Check(vector<int>& v,LL mid,int k)
	{
		LL cnt = 1;
		LL sum = 0;
		for(auto e : v)
		{
			if(sum + e > mid)
			{
				// 新开一段
				++cnt;
				sum = e;
				if(cnt > k) return false;
			}
			else sum += e;
		}
		return true;
	}
	
	int splitArray(vector<int>& nums, int k)
	{
		LL l = 0,r = 0;
		for(auto e : nums) 
		{
			l = max(l,(LL)e);
			r += e;
		}
		
		// >= 
		while(l < r)
		{
			LL mid = (l + r - 1) / 2;
			if(Check(nums,mid,k)) r = mid;
			else l = mid + 1;  
		}
		
		return l;
	}
};
