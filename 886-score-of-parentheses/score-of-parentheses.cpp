class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        int count=0;
        stack<int>stk;
        for(int i=0;i<n;i++){
            if(s[i]=='(') stk.push(-1);
            else if(s[i]==')') {
                int sum=0;
                while(stk.top()!=-1){
                    sum+=stk.top();
                    stk.pop();
                }
                if(sum==0){
                    stk.pop();
                    stk.push(1);
                }
                else{
                    stk.pop();
                   sum*=2;
                   stk.push(sum); 
                }
            }
        }
        while(!stk.empty()){
            count+=stk.top();
            stk.pop();
        }
        return count;

    }
};