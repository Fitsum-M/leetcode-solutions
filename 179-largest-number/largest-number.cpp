class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>v;
        for(int num:nums){
            v.push_back(to_string(num));
        }
        sort(v.begin(), v.end(), [](const string &a, const string &b){
        return a + b > b + a;
    });
        string result;
        for(string s:v){
            result+=s;
        }
        if(result[0] == '0') return "0";
        return result;
    }
};