class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>srs;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
           if(nums1[i]==nums2[j]){
            srs.insert(nums1[i]);
            i++;
            j++;
           }
           else if(nums1[i]>nums2[j]){
            j++;
           }
           else{
            i++;
           }
        }
        vector<int>che;
        for(int s:srs){
            che.push_back(s);
        }
        return che;
    }
};