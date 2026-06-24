class Solution {
public: 
    void reverseString(vector<char>& s) {
        stack<char> str;
        for(char&c : s)
            str.push(c);
        int i = 0;
        while(!str.empty()){
            s[i++] = str.top();
            str.pop();
        }
    }
};