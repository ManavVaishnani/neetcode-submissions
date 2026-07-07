class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracket = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c : s){
            if(bracket.count(c)){
                if(!st.empty() && st.top() == bracket[c]){
                    st.pop();
                } else{
                    return false;
                }
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
