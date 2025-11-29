class Solution {
public:
    int calPoints(vector<string>& o) {
        int n=o.size();
        stack<int>stk;
        for(string c:o){
             if(c=="+"){
                if (stk.size() < 2) continue;
                 int temp=stk.top();
                 stk.pop();
                 int temp2=stk.top();
                 stk.push(temp);
                 int sum=temp2+temp;
                 stk.push(sum);
            }
            else if(c=="D"){
                int temp=stk.top()*2;
                stk.push(temp);
            }
            else if(c=="C"){
                stk.pop();
            }
            else{
                int score=stoi(c);
                stk.push(score);
            }
        }
        int result=0;
       while(!stk.empty()){
        result+=stk.top();
        stk.pop();
       }
       return result;
    }
};