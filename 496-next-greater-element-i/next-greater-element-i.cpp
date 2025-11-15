class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(m == 0) return vector<int>(n, -1);
        stack<int>stk;
        vector<int>v(m,-1);
        if(nums2.size()!=0)v[m-1]=-1;
        stk.push(nums2[m-1]);
        for(int i=m-1;i>=0;i--){
             while(!stk.empty()  && stk.top() <=nums2[i]){
                stk.pop();
             }
             if(stk.empty()){
                 v[i]=-1; 
             }
             else {
                v[i]=stk.top();
             }
             stk.push(nums2[i]);
        }
        map<int,int>mapp;
        vector<int>ans(n);
        for(int i=0;i<m;i++){
            mapp[nums2[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(mapp.find(nums1[i])!=mapp.end()){
                int index=mapp[nums1[i]];
                ans[i]=v[index];
            }
        }
        return ans;
    }
};