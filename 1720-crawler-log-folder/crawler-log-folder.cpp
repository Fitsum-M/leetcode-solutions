class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n=logs.size();
        int depth=0;
        for(int i=0;i<n;i++){
            if(logs[i]=="../"){
                if(depth>0) depth--;
            }
            else if(logs[i]=="./"){
                continue;
            }
            else{
                depth++;
            }
        }
        return depth;
    }
};