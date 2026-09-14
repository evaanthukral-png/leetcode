class Solution {
public:
    bool isValid(string s) {
        string st = "";
        for (int i =0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st += s[i];
            }
            else
            {
                if(st.empty())
                    return false;
                if(s[i] == ')' && st.back() != '(')
                    return false;
                if(s[i] == ']' && st.back() != '[')
                    return false;
                if(s[i] == '}' && st.back() != '{')
                    return false;
                st.pop_back();
            }
        }
        return st.empty();
    }
};