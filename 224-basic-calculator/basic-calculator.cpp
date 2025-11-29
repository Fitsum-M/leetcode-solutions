class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        stack<pair<int,int>>stk;
        int sign=1,res=0,curr=0;

        for(int i=0;i<n;i++){
         if(s[i]=='-') {
           if(sign==0)res-=curr;
           else res+=curr; 
           curr=0;
           sign=0; 
         }
         else if(s[i]=='+'){
            if(sign==0) res-=curr;
            else res+=curr;
            curr=0;
            sign=1;
         } 
         else if(s[i]=='('){
            stk.push({res,sign});
            res=0;curr=0;sign=1;
         }
         else if(s[i]==')'){
            if(sign==0) res-=curr;
            else res+=curr;
            curr=0;
            pair<int,int>p=stk.top();
            stk.pop();
            if(p.second==1){
             res=res+p.first;
            }
            else{
               res=p.first-res; 
            }  
         }
         else if(isdigit(s[i])){
           curr=curr*10+(s[i]-'0');
         } 
        }
        if(sign==0)res-=curr;
        else res+=curr;
        return res;
    }
};