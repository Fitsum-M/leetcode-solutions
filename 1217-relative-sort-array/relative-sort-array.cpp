class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>freq;
        vector<int>leftover;
        vector<int>result;
        for(int x:arr1){
            freq[x]++;
        }
        for(int x:arr2){
        while(freq[x]>0){
             result.push_back(x);
             freq[x]--;
        }
        }
        for(auto &[num, count]: freq){
            while(count-- > 0){
                leftover.push_back(num);
            }
        }
        sort(leftover.begin(),leftover.end());
        result.insert(result.end(),leftover.begin(),leftover.end());
        return result;
    }
};