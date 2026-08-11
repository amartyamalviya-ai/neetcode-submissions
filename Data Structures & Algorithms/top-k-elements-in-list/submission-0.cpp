class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        //min heap banao
        // fre and value dalo
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto ele:mp){
            pq.push({ele.second,ele.first});
            if(pq.size()>k) pq.pop();
        }
        //vector me lo
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
