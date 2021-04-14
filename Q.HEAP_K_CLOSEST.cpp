//https://practice.geeksforgeeks.org/problems/k-closest-elements3619/1#

class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        
        priority_queue<pair<int,int>>pq;
        int i,j;
        
        for(i=0;i<n;++i)
        {
            if(abs(arr[i]-x)!=0)
            pq.push({abs(arr[i]-x),arr[i]});
            
            if(pq.size()>k)
                pq.pop();
        }
        
        vector<int> ans;
        
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};