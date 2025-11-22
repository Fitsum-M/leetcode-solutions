class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        set<int>s1;
        set<int>s2;
        vector<int>v;
        for(int c:nums1){
            s1.insert(c);
        }
         for(int x:nums2){
            s2.insert(x);
         }
        for(int element:s1){
            if(s2.find(element)!=s2.end()){
                v.push_back(element);
            }
        }
         return v;
    }
};