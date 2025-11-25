class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int>v;
        for(auto &p:mp) {
            if(p.second==2){
                v.push_back(p.first);
            }
        }
        return v;
    }
};