class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        stack<char>str;
        int index=0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                 index=i;
                 break;
        }
        }
        for(int i=0;i<=index;i++){
            str.push(word[i]);
        }
       
        for(int i=0;i<=index;i++){
              word[i]=str.top();
              str.pop();
            }
        return word;


    }
};