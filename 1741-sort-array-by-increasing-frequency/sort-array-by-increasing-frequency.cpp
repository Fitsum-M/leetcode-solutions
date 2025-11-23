class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        map<int,int>freq;
        for(int x:nums){
             freq[x]++;
        }
        sort(nums.begin(),nums.end() ,[&](int a,int b){
            if(freq[a]==freq[b]){
                return a>b;
            }
            return freq[a]<freq[b];
        });
        return nums;
    }
};