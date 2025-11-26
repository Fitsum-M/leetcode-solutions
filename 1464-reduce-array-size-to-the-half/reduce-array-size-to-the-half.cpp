class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int>freq;
        for(int x:arr){
          freq[x]++;
        }
        vector<int>v;
        for(auto const[element,count]:freq){
          v.push_back(count);
        }
        sort(v.begin(),v.end(),greater<int>());
        int target=n/2;
        int count=0;
        int sum=0;
        for(int f:v){
            sum+=f;
            count++;
            if(sum>=target) return count;
        }
        return count;
    }
};