class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++)
        {       
            pq.push({abs(arr[i]-x),arr[i]});
        }
        while(pq.size()!=k)
        {
            pq.pop();
        }
        vector<int>newarr;
        while(pq.size()>0)
        {
            newarr.push_back(pq.top().second);
            pq.pop();
        }
        sort(newarr.begin(),newarr.end());
        return newarr;
    }
};
