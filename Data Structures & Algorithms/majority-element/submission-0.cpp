class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxval=INT_MIN;
        int maxfre=INT_MIN;
        for(auto ele: mp){
         if(ele.second>maxfre){
            maxfre=ele.second;
            maxval=ele.first;
         }
        }
        return maxval;
    }
};