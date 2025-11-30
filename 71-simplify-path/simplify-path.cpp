

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stk;
        int n = path.size();
        for (int i = 0; i < n; ) {
            
            while (i < n && path[i] == '/') ++i;
            if (i >= n) break;
            int j = i;
            while (j < n && path[j] != '/') ++j;
            string token = path.substr(i, j - i);
            if (token == "..") {
                if (!stk.empty()) stk.pop_back();
            } else if (token != "." && !token.empty()) {
                stk.push_back(token);
            }
            i = j;
        }
        if (stk.empty()) return "/";
        string res;
        for (auto &s : stk) {
            res += "/" + s;
        }
        return res;
    }
};
