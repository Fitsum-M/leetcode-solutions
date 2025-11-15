class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>str;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                str.push(s[i]);
            }
             if(str.empty())  return false;
            else if(s[i]==')'){
                if(!str.empty() && str.top()!='(') return false;
                str.pop();
            }
            else if(s[i]=='}'){
                if(!str.empty() && str.top()!='{') return false;
                str.pop();
            }
            else if(s[i]==']'){
                if(!str.empty() && str.top()!='[') return false;
                str.pop();
            }
        }
        return str.empty();
    }
};