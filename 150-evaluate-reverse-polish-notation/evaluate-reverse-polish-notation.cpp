class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>s;
    for(string &t : tokens){
            if(t=="+" || t=="-" || t=="*" || t=="/"){
                if (s.size() < 2) return 0; 
                  int b=s.top() ; s.pop();
                  int a=s.top() ; s.pop();
                  if(t=="+")  s.push(a+b);
                  else if(t=="-")  s.push(a-b);
                  else if(t=="*") s.push(a*b);
                  else if(t=="/") {
                    if(b!=0){
                        s.push(a/b);
                    }
                  }
            }
                   else{
                  s.push(stoi(t));
               }
    }
    
    
    return s.empty() ? 0 : s.top();
    }
};