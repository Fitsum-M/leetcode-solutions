class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        map<char,int>mapp;
        for(char c:s){
            mapp[c]++;
        }
        sort(s.begin(),s.end(),[&mapp] ( const char a,const char b){
            if(mapp[a]==mapp[b]){
                return a<b;
            }
            return mapp[a]>mapp[b];
        });
        return s;
    }
};