class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>v;
        for(auto &p:mp) v.push_back({p.second, p.first});
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
             return a.first>b.first;
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};