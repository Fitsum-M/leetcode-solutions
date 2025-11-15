class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        for(char x:s){
            freq[x]++;
        }
        sort(s.begin(),s.end(),[&](char a,char b){
            if(freq[a]==freq[b]){
                return a<b;
            }
            return freq[a]>freq[b];  
        });
        return s;
    }
};