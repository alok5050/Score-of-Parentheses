class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        int ans = 0;
        int layer = 0;
        
        for(int i = 0; i + 1 < n; ++i) {
            const char a = s[i];
            const char b = s[i + 1];

            if(a == '(' && b == ')') 
                ans += 1 << layer;
                layer += a == '(' ? : -1;
        }
        return ans;
        
    }
};
