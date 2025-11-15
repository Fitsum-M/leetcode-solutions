class Solution {
public:
    bool backspaceCompare(string s, string t) {
       int n=s.size();
       int m=t.size();
       stack<char>str;
       stack<char>w;
       if(n==1 && s[0]=='#' ) return false;
       if(m==1 && t[0]=='#' ) return false;

       
       for(int i=0;i<n;i++){
        if(s[i]!='#'){
            str.push(s[i]);
        }
        else{
            if(!str.empty()){
            str.pop();
            }
        }
       } 
       for(int i=0;i<m;i++){
        if(t[i]!='#'){
            w.push(t[i]);
        }
        else{
            if(!w.empty()){
            w.pop();
            }
        }
       }
       string q="";
       while(!str.empty()){
           q+=str.top();
           str.pop();
       } 
       string r="";
       while(!w.empty()){
           r+=w.top();
           w.pop();
       } 
       if(q==r) return true;
       return false;
    }
};