class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        stack<char>stk;
        for(int i=0;i<n;i++){
            if(stk.empty()){
                stk.push(s[i]);
            }
            else if(isdigit(s[i]) && !isdigit(stk.top())){
                stk.pop();
            }
            else if(isdigit(s[i]) && isdigit(stk.top())){
                stk.push(s[i]);
            }
            else{
                stk.push(s[i]);
            }
        }
        string w="";
        while(!stk.empty()){
            w+=stk.top();
            stk.pop();
        }
         reverse(w.begin(),w.end());
         return w;
    }
};