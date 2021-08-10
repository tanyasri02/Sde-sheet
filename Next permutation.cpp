class Solution {
public:
    void nextPermutation(vector<int>& v) {
      int n = v.size();
		int ind = -1;
		int j;
		for(int i=n-2; i>=0; i--)
		{
			if(v[i] < v[i+1])
			{
				ind = i;
				break;
			}
		}
    
		if(ind == -1)
			reverse(v.begin(), v.end());
        else
		{
			for(j = n-1; j>ind; j--)
			{
				if(v[j] > v[ind])
					break;
			}
			swap(v[ind], v[j]);
			reverse(v.begin()+ind+1, v.end());
		}  
    }
};
