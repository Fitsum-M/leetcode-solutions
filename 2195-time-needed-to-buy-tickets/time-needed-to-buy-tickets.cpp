class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            q.push({tickets[i],i});
        }
        int time=0;
        while(true){
           if(q.front().second==k  && q.front().first==1){
                  time++;
                  break;
           } 
           else if(q.front().second==k  && q.front().first!=1){
               time++;
            q.front().first--;
            q.push(q.front());
            q.pop();
           }
           else if(q.front().first==1){
                   time++;
                   q.pop();
           } 
           else if(q.front().first>1){
            time++;
            q.front().first--;
            q.push(q.front());
            q.pop();
           }   
        }
    return time;
    }
};