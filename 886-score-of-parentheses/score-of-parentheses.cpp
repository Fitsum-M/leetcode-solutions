class Solution {
public:
    int scoreOfParentheses(std::string s) {
        std::stack<int> score_stack;
        score_stack.push(0); 

        for (char c : s) {
            if (c == '(') {
                score_stack.push(0);
            } else { 
                int inner_score = score_stack.top();
                score_stack.pop();

                int outer_score = score_stack.top();
                score_stack.pop();

                int current_group_score = std::max(1, 2 * inner_score);
                
                score_stack.push(outer_score + current_group_score);
            }
        }

        return score_stack.top();
    }
};