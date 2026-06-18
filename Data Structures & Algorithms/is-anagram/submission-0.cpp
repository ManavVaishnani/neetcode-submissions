class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        unordered_map<char, int> feq1;
        unordered_map<char, int> feq2;

        for(int i =0;i<s.length();i++){
            feq1[s[i]]++;
            feq2[t[i]]++;
        }

        return feq1 == feq2;
    }
};
