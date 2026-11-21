class Solution {
public:
	using LL = long long;
	
	bool Check(vector<int>& v,LL k,int h)
	{
		LL sum = 0;
		for(auto e : v)
		{
			sum += (e + k - 1) / k;
			if(sum > h) return false;
		}
		return true;
	}
	
	int minEatingSpeed(vector<int>& piles, int h)
	{
		int maxi = 0;
		for(auto e : piles)
			maxi = max(maxi,e);
		
		// 1-maxi >= 
		LL l = 1,r = maxi;
		while(l < r)
		{
			LL mid = (l + r) / 2;
			if(Check(piles,mid,h)) r = mid;
			else l = mid + 1; 
		}
		
		return l;
	}
};
