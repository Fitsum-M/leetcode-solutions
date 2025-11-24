class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int x:nums){
            s.insert(x);
        }
        vector<int>v(s.begin(),s.end());
        int m=v.size();
        if(m<3){
            return v[m-1];
        }
       
        return v[m-3];
    }
};