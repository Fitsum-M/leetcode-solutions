class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
       map<char,int>mp;
       for(char c:t){
        mp[c]++;
       }
       if(n==m){
       for(char element:s){
        if(mp[element]==0) return false;
        mp[element]--;
       }
       return true;
       }
       return false;
       
    }
};