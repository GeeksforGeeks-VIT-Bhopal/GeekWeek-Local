#include <algorithm>
#include <utility>

bool compare(pair<int,int> a, pair<int,int> b)
{
	if(a.first == b.first)
	{
		return a.second < b.second; 
	}
	return a.first < b.first;
}

vector<int> mergeIntervals(vector<pair<int,int>> arr) 
{ 

	int n = arr.size();  
    sort(arr.begin(), arr.end(), compare); 
  
    int index = 0; 
  
    for (int i=1; i<n; i++)  
    {  
        if (arr[index].second >=  arr[i].first)  
        {  
            arr[index].second = max(arr[index].second, arr[i].second);  
  
        }  
        else 
		{ 
            index++; 
            arr[index] = arr[i];  
        }     
    }  
  
  	vector<int> ans;
    for (int i = 0; i <= index; i++)
	{
    	ans.push_back(arr[i].second - arr[i].first + 1);
	}  
	 
    return ans; 
} 
  
vector<int> partitionString(string S)
{
	int n = S.length();
	
	vector<pair<int,int>> intervals;
	
	pair<int,int> hash[26];
	
	for(int i = 0; i < 26; i++)
	{
		hash[i].first = n;
	}
	
	for(int i = 0; i < n; i++)
	{
		hash[S[i]-'a'].first = min(hash[S[i]-'a'].first, i);
		hash[S[i]-'a'].second = i;
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(hash[i].first < n)
		{
			intervals.push_back({hash[i].first, hash[i].second});
		}	
	}
	
	return mergeIntervals(intervals);
		
}

