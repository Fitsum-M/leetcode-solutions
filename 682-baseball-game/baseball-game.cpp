class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int>k;
        int sum=0;
        for(int i=0;i<n;i++){
            if (isdigit(operations[i][0]) || (operations[i][0] == '-' && isdigit(operations[i][1])))
{
                int score = stoi(operations[i]);   
                k.push(score);
                sum+=score;
            }
        
        else if(operations[i]=="C"){
          
            sum-=k.top();
              k.pop();
        }
        else if(operations[i]=="D"){
            int ad=k.top();
            int ad3=ad*2;
              sum=sum+ad3;
              k.push(ad3);
        }
        else if(operations[i]=="+"){
               int temp=k.top();
               k.pop();
               int ad2=k.top()+temp;
               sum=sum+ad2;
               k.push(temp);
               k.push(ad2);
        }
        }
        return sum;
    }
};