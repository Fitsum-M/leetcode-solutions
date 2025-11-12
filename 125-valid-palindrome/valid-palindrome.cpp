class Solution {
public:
    bool isPalindrome(string s) {
      
    string filtered = "";
    for (char c : s) {
        if (isalnum(c)) {
            filtered += tolower(c);
        }
    }

    string rev = "";
    for (int i = filtered.size() - 1; i >= 0; i--) {
        rev += filtered[i];
    }

    return filtered == rev;
}
};